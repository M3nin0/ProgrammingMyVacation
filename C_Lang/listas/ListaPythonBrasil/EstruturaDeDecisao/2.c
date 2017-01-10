//Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include <stdio.h>

int main(void){

  int num;

  printf("Insira um número: \n");
  scanf("%i",&num);

  if(num < 0)
    printf("Número negativo!!!\n");
  else
    printf("O número é positivo!!!\n");

  return 0;
}
