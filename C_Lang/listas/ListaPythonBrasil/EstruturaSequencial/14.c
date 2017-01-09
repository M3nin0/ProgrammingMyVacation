/*

João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos)
deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a variável peso
(peso de peixes) e verifique se há excesso. Se houver, gravar na variável excesso e na variável multa o valor da multa
que João deverá pagar.Caso contrário mostrar tais variáveis com o conteúdo ZERO.
*/

#include <stdio.h>

int main(void){

  int peso,perde;

  printf("Insira o peso pescado: \n");
  scanf("%i",&peso);

  if(peso > 50){
    perde = (peso - 50) * 4;
    printf("Você terá de pagar R$%i\n",perde);
  }else{
    printf("Você está dentro da lei =D\n");
  }

  return 0;
}
