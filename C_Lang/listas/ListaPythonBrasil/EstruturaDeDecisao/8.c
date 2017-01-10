/*Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar,
sabendo que a decisão é sempre pelo mais barato.*/

#include <stdio.h>

int main(void){

  int prod1,prod2,prod3;

  printf("Qual o valor do primeiro produto: \n");
  scanf("%i",&prod1);
  printf("Qual o valor do segundo produto: \n");
  scanf("%i",&prod2);
  printf("Qual o valor do terceiro produto: \n");
  scanf("%i",&prod3);

  if (prod1 < prod2 && prod1 < prod3){
    printf("Compre o primeiro produto\n");
  } else if (prod2 < prod1 && prod2 < prod3){
    printf("Compre o segundo produto\n");
  } else if (prod3 < prod1 && prod3 < prod2){
    printf("Compre o terceiro produto\n");
  }

  return 0;
}
