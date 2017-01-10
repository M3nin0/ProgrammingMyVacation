//Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

#include <stdio.h>
#include <string.h>

int main(void){

  char letra[10];

  printf("Insira seu sexo\n");
  scanf("%s",&letra);

  if ((strcmp(letra,"F") == 0))
    printf("Feminino\n");
  else if ((strcmp(letra,"M") == 0))
    printf("Masculino\n");
  else
    printf("Sexo invalido!!!\n");

  return 0;
}
