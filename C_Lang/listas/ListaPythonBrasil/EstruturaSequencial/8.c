/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
Calcule e mostre o total do seu salário no referido mês.*/

#include <stdio.h>

int main(void){

  int hG,hT;

  printf("Insira o total de horas ganhas no mês: \n");
  scanf("%i", &hG);
  printf("Insira o total de horas trabalhadas: \n");
  scanf("%i",&hT);

  printf("Você ganha R$ %i \n",(hG * hT));
  
  return 0;
}
