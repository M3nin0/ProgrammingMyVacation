#Importando todo o conteúdo de TKinter
from tkinter import *

janela = Tk() #Importando uma instancia de Tk

lb = Label(janela,text="Olá") #Atribuindo os valores de Label a uma variavel

lb.place(x=150, y=150) #Definindo posição place 

#TamanhoxAltura+Esquerda+Topo
janela.geometry("300x300+200+200")

janela.mainloop()
