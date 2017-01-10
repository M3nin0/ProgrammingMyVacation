//Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

#include <stdio.h>
#include <string.h>

int main(void){

  char letra[10];

  printf("Insira uma letra: \n");
  scanf("%s",&letra);

  if ((strcmp(letra,"a") == 0) || (strcmp(letra,"e") == 0) || (strcmp(letra,"o") == 0) || (strcmp(letra,"u") == 0) ||
  (strcmp(letra,"i") == 0))
    printf("Vogal\n");
  else
    printf("Consoante\n");

  return 0;
}
