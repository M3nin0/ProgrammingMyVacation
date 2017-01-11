from tkinter import *

janela = Tk()

lb1 = Label(janela,text="LINHA 1",bg="white")
lb2 = Label(janela,text="LINHA 2",bg="yellow")
lb3 = Label(janela,text="LINHA 3",bg="blue")

lb1.pack(side=TOP,fill=BOTH,expand=True)
lb1['font'] = ("Times", 99, "bold")
lb2.pack(side=TOP,fill=BOTH,expand=True)
lb3.pack(side=TOP,fill=BOTH,expand=True)

janela.geometry('300x300+200+200')
janela.mainloop()
