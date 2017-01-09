//Faça um Programa que converta metros para centímetros.

#include <stdio.h>

int main(void){

  int c,m;
  printf("Insira a quantidade de metros\n");
  scanf("%i",&m);

  c = m * 1000;

  printf("O valor em centimetros é: %i\n",c);

  return 0;
}
