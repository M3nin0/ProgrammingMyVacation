#Colocando um item em cada canto da tela

from tkinter import *

def abreJanela():
    janela2 = Tk()
    janela2.title("Segunda janela =D")

    janela2.geometry("300x300+400+300")
    janela2.mainloop()

janela = Tk()
janela.title("Side Pack 2")

lb1 = Label(janela,text="Esquerda",bg="red")
lb1.pack(side=LEFT)

lb2 = Label(janela,text="Direita",bg="blue")
lb2.pack(side=RIGHT)

lb3 = Label(janela,text="Topo",bg="gray")
lb3.pack(side=TOP)

lb4 = Label(janela,text="Baixo",bg='yellow')
lb4.pack(side=BOTTOM)

bt1 = Button(janela,text="Outra tela",command=abreJanela)
bt1.place(x=120,y=150)

janela.geometry("300x300+200+200")
janela.mainloop()
