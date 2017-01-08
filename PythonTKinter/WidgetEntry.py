from tkinter import *

janela = Tk()
janela.title("Widget Entry")

def btEntry():
    lb2['text'] = ed.get()

lb = Label(janela,text="Insira seu nome")
lb.place(x=100,y=70)

lb2 = Label(janela,text="")
lb2.place(x=100,y=170)

bt = Button(janela,text="Confirmar",command=btEntry)
bt.place(x=100,y=130)

ed = Entry(janela)
ed.place(x=100,y=100)


janela.geometry("300x300+300+300")
janela.mainloop()
