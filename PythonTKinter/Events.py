from tkinter import *
from functools import partial #Reescreve uma função e coloca novos parametros
from  tkinter import *

def button_click(botao):
    if botao['text'] == "A verdade":
        print("Ira perceber até onde vai a toca do coelho")
    else:
        print("A ingnorancia é uma benção")
    #print(botao['text'])

janela = Tk()
janela.title("Faça sua escolha")

lb = Label(janela,text="Qual é sua escolha ?")
lb.place(x=120,y=80)

bt1 = Button(janela, width=20,text="A verdade")
bt1['command'] = partial(button_click,bt1)
bt1['bg'] = 'red'
bt1.place(x=100,y=120)

bt2 = Button(janela,width=20,text="A ingnorância")
bt2['command'] = partial(button_click,bt2)
bt2['bg'] = 'blue'
bt2.place(x=100,y=150)


janela.geometry("350x300+200+200")
janela.mainloop()
