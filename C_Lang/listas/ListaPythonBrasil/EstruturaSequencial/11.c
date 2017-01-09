/*
Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:

  1-  o produto do dobro do primeiro com metade do segundo .
  2-  a soma do triplo do primeiro com o terceiro.
  3-  o terceiro elevado ao cubo.

*/

#include <stdio.h>

int main(void){

  int num1,num2;
  float num3,um,dois,tres;

  printf("Insira o primeiro valor: \n");
  scanf("%i",&num1);
  printf("Insira o segundo valor: \n");
  scanf("%i",&num2);
  printf("Insira o terceiro valor: \n");
  scanf("%f",&num3);


  um = (num1 * 2) + (num2 / 2);
  dois = (num1 * 3) + num3;
  tres = (num3 * num3 * num3);

  printf("1 = %.2f\n",um);
  printf("2 = %.2f\n",dois);
  printf("3 = %.2f\n",tres);

  return 0;
}
