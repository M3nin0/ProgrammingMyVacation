#Código minimo

#Importe a biblioteca de TKinter

import tkinter as tk #Importando o pacote como "tk"

#Definindo uma instancia

janela = tk.Tk()

#Definindo titulo da janela
janela.title("Inicio")

#Definindo a cor de fundo
janela["bg"] = 'blue' #Alterando a chave bg da janela

#Definindo tamanho da janela
#LarguraXAltura+Esquerda do video+Topo do video
janela.geometry("300x300+550+250")

#Chamando janela padrão
janela.mainloop()
