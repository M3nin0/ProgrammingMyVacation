import pygame
from tkinter import *
from pygame.mixer import Sound

def ExplodeMundo():
    audio.play()

pygame.init()
janela = Tk()

audio = pygame.mixer.Sound("a-mesma-praca.ogg")

botao = Button(janela,width=35,text='Clique aqui para explodir o Mundo',command=ExplodeMundo)
botao.place(x=100,y=100)

janela.geometry("500x300+550+250")
janela.mainloop()
