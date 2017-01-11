from tkinter import *

janela = Tk()
janela.title("Anchor")

lb1 = Label(janela,text='SIDE1',bg="white")
lb2 = Label(janela,text='SIDE2',bg="red")
lb3 = Label(janela,text='ANCHOR1',bg="white")
lb4 = Label(janela,text='ANCHOR2',bg="red")

#N
#W
#S
#E

lb1.pack()
lb2.pack()
lb3.pack(side=LEFT,anchor=NW)
lb4.pack(side=LEFT,anchor=SW)


janela.geometry("300x300+200+200")
janela.mainloop()
