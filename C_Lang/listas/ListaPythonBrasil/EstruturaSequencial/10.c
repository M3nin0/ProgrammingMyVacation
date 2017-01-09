//Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

#include <stdio.h>

int main(void){

  float c,f;

  printf("Insira a temperatura(C°): \n");
  scanf("%f", &c);

  // °F = °C × 1, 8 + 32

  f = c * 1.8 + 32;

  printf("A temperatura fica: %.2fF°\n",f);

  return 0;
}
