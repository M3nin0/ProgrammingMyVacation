from tkinter import *

janela = Tk()
janela.title("1° Calculadora")

def calcula():
    total = 0
    #Verificando se os valores passados são apenas números
    if(str(val1.get()).isnumeric() and str(val2.get())).isnumeric():
        total = int(val1.get()) + int(val2.get())
        lb['text'] = str(total)
    else:
        lb['text']='Apenas numeros!!'

val1 = Entry(janela)
val1.place(x=100,y=100)
val2 = Entry(janela)
val2.place(x=100,y=140)

bt = Button(janela,text="Somar",command=calcula)
bt.place(x=100,y=190)

lb = Label(janela,text='Resultado aqui')
lb.place(x=100,y=240)


janela.geometry("340x300+300+300")
janela.mainloop()
