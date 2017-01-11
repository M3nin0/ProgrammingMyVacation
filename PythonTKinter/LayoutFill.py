from tkinter import *

janela = Tk()
janela.title("Layout Fill")

lb1 = Label(janela,text='Horizontal',bg='white')
lb1.pack(side=TOP,fill=X)

lb2 = Label(janela,text='Esqueda',bg='yellow')
lb2.pack(side=LEFT,fill=Y)

lb3 = Label(janela,text='Direita',bg='yellow')
lb3.pack(side=RIGHT,fill=Y)

lb4 = Label(janela,text='BOTTOM',bg='white')
lb4.pack(side=BOTTOM,fill=X)



janela.geometry("300x300+200+200")
janela.mainloop()
