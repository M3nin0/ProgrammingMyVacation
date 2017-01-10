//Faça um Programa que peça dois números e imprima o maior deles.

#include <stdio.h>

int main(void){

  int num1,num2;

  printf("Insira um número: \n");
  scanf("%i",&num1);
  printf("Insira mais um número: \n");
  scanf("%i",&num2);

  if(num1 > num2)
    printf("O número %i é o maior\n",num1);
  else
    printf("O número %i é o maior\n",num2);

  return 0;
}
