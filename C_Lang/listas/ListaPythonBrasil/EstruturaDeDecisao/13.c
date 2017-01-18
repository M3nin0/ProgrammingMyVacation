/*Faça um Programa que leia um número e exiba o dia correspondente da semana.
(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.
*/

#include <stdio.h>

int main(void){

  int value;

  printf("Insira o dia da semana: \n1-Domingo\n2-Segunda\n3-Terça\n4-Quarta\n5-Quinta\n6-Sexta\n7-Sabado\n");
  scanf("%i",&value);

  switch (value) {
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda\n");
      break;
    case 3:
      printf("Terça\n");
      break;
    case 4:
      printf("Quarta\n");
      break;
    case 5:
      printf("Quinta\n");
      break;
    case 6:
      printf("Sexta\n");
      break;
    case 7:
      printf("Sabado\n");
      break;
    default:
      printf("INVALIDO!!!\n");
      break;
  }

  return 0;
}
