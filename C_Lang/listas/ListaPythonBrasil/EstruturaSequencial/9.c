/*
Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius.

    C = (5 * (F-32) / 9).
*/

#include <stdio.h>

int main(void){

  float f,c;

  printf("Insira a temperatura em Farenheit: \n");
  scanf("%f",&f);

  c = (5 * (f - 32) / 9);

  printf("A temperatura em C° fica: %.2f\n", c);

  return 0;
}
