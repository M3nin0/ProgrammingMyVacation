//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <stdio.h>


int main(void){

  float r,area;

  printf("Insira o Raio do circulo: \n");
  scanf("%f",&r);

  area = 3.14 * (r*r);

  printf("A área é: %.2f\n",area);

  return 0;
}
