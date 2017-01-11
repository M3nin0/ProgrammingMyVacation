from tkinter import *

janela = Tk()
janela.title("Referências")

def getInfo():
    final = str(entryAutor.get()) + '.' + str(entryTitulo.get()) + ':' + str(entrySubT.get()) + str(entryAnopsq.get()) + '.' + 'Disponivel em:' + str(entryEndere.get()) + '.' + 'Acesso em: ' + str(entryDia.get()) + " / " + str(entryMes.get()) +" / "+ str(entryAno.get())
    lbResult['text'] = final
    return 0

lbAutor = Label(janela,text='Insira o nome do autor:')
lbAutor.place(x=150,y=58)
entryAutor = Entry(janela)
entryAutor.place(x=250,y=80)

lbTitulo = Label(janela,text='Insira o titulo:')
lbTitulo.place(x=150,y=120)
entryTitulo = Entry(janela)
entryTitulo.place(x=250,y=150)

lbSubT = Label(janela,text='Insira o subtitulo:')
lbSubT.place(x=150,y=180)
entrySubT = Entry(janela)
entrySubT.place(x=250,y=200)

#URL
lbEndere = Label(janela,text='Insira o endereço (URL):')
lbEndere.place(x=150,y=240)
entryEndere = Entry(janela)
entryEndere.place(x=250,y=270)

#Ano de pesquisa
lbAnopsq = Label(janela,text='Insira o ano de publicação do trabalho do autor: ')
lbAnopsq.place(x=150,y=295)
entryAnopsq = Entry(janela)
entryAnopsq.place(x=250,y=320)

lbDia = Label(janela,text="Dia: ")
lbDia.place(x=150,y=350)
entryDia = Entry(janela)
entryDia.place(x=250,y=370)

lbMes = Label(janela,text='Mês: ')
lbMes.place(x=150,y=405)
entryMes = Entry(janela)
entryMes.place(x=250,y=430)


lbAno = Label(janela,text='Ano: ')
lbAno.place(x=150,y=460)
entryAno = Entry(janela)
entryAno.place(x=250,y=490)

btMake = Button(janela,text='Gerar referências!',command=getInfo)
btMake.place(x=250,y=550)

lbResult = Label(janela)
lbResult.place(x=100,y=605)

janela.geometry('600x650+500+10')
janela.mainloop()
