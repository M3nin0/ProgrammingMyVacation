/*
Tendo como dados de entrada a altura de uma pessoa,
 construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58
*/

#include <stdio.h>

int main(void){

  float altura,perc;

  printf("Insira sua altura\n");
  scanf("%f",&altura);

  perc = (72.7*altura) - 58;

  printf("O peso perfeito para sua altura é: %.2f\n",perc);

  return 0;
}
