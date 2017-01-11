#Programa para gerar referencias =D

from tkinter import *

janela = Tk()
janela.title("Referências - WEB Page")

def SucessEntry():
    def destroy():
        sucessW.destroy()

    entryAno.delete(0, 'end')
    entryDia.delete(0, 'end')
    entryMes.delete(0, 'end')
    entrySubT.delete(0, 'end')
    entryAutor.delete(0, 'end')
    entryEndere.delete(0, 'end')
    entryAnopsq.delete(0, 'end')
    entryTitulo.delete(0, 'end')

    sucessW = Tk()
    sucessW.title("Progress OK")
    lbSucess = Label(sucessW,text='Adição feita com sucesso!')
    lbSucess.pack(side=TOP)
    lbSucess['font']=("Arial",12,"bold")
    btOk = Button(sucessW,text='OK',command=destroy)
    btOk.pack(side=BOTTOM)
    btOk['font']=("Arial",12,"bold")
    sucessW.geometry('400x100+500+500')
    sucessW.mainloop()


def getInfo():
    local = open('ref.txt','r')
    final = local.readlines()
    final.append('\n')
    final.append(str(entryAutor.get()) + '.' + str(entryTitulo.get()) + ':' + str(entrySubT.get()) + str(entryAnopsq.get()) + '.' + 'Disponivel em:' + str(entryEndere.get()) + '.' + 'Acesso em: ' + str(entryDia.get()) + " / " + str(entryMes.get()) +" / "+ str(entryAno.get()))
    local.close()
    local = open('ref.txt','w')
    local.writelines(final)
    local.close()
    SucessEntry()

lbAutor = Label(janela,text='Insira o nome do autor:')
lbAutor['font']=("Arial",12,"bold")
lbAutor.pack(side=TOP,fill=BOTH,expand=True)
entryAutor = Entry(janela)
entryAutor['font']=("Times New Roman",12,"bold")
entryAutor.pack(side=TOP,fill=Y,expand=True)

lbTitulo = Label(janela,text='Insira o titulo:')
lbTitulo['font']=("Arial",12,"bold")
lbTitulo.pack(side=TOP,fill=BOTH,expand=True)
entryTitulo = Entry(janela)
entryTitulo['font']=("Times New Roman",12,"bold")
entryTitulo.pack(side=TOP,fill=Y,expand=True)

lbSubT = Label(janela,text='Insira o subtitulo:')
lbSubT['font']=("Arial",12,"bold")
lbSubT.pack(side=TOP,fill=BOTH,expand=True)
entrySubT = Entry(janela)
entrySubT['font']=("Times New Roman",12,"bold")
entrySubT.pack(side=TOP,fill=Y,expand=True)

#URL
lbEndere = Label(janela,text='Insira o endereço (URL):')
lbEndere['font']=("Arial",12,"bold")
lbEndere.pack(side=TOP,fill=BOTH,expand=True)
entryEndere = Entry(janela)
entryEndere['font']=("Times New Roman",12,"bold")
entryEndere.pack(side=TOP,fill=Y,expand=True)

#Ano de pesquisa
lbAnopsq = Label(janela,text='Insira o ano de publicação do trabalho do autor: ')
lbAnopsq['font']=("Arial",12,"bold")
lbAnopsq.pack(side=TOP,fill=BOTH,expand=True)
entryAnopsq = Entry(janela)
entryAnopsq['font']=("Times New Roman",12,"bold")
entryAnopsq.pack(side=TOP,fill=Y,expand=True)

lbDia = Label(janela,text="Dia: ")
lbDia['font'] = ("Arial", 12, "bold")
lbDia.pack(side=LEFT,fill=X,expand=True)
entryDia = Entry(janela)
entryDia['font']=("Times New Roman",12,"bold")
entryDia.pack(side=LEFT,fill=X,expand=True)

lbMes = Label(janela,text='Mês: ')
lbMes['font'] = ("Arial", 12, "bold")
lbMes.pack(side=LEFT,fill=X,expand=True)
entryMes = Entry(janela)
entryMes['font']=("Times New Roman",12,"bold")
entryMes.pack(side=LEFT,fill=X,expand=True)


lbAno = Label(janela,text='Ano: ')
lbAno['font'] = ("Arial", 12, "bold")
lbAno.pack(side=LEFT,fill=X,expand=True)
entryAno = Entry(janela)
entryAno['font']=("Times New Roman",12,"bold")
entryAno.pack(side=LEFT,fill=X,expand=True)

btMake = Button(janela,text='Gerar referências!',command=getInfo)
btMake.pack(side=BOTTOM)

janela.geometry('1100x650+90+50')
janela.mainloop()
