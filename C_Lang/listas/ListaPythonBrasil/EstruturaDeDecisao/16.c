//Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.

#include <stdio.h>

int main(void){

  int ano,resto;

  printf("Insira o ano: \n");
  scanf("%i",&ano);

  resto = ano % 4;

  if (resto == 0)
    printf("Ano bissexto\n");
  else
    printf("Não é bissexto\n");

  return 0;
}
