//Faça um Programa que leia três números e mostre o maior deles.

#include <stdio.h>

int main(void){

  int num1,num2,num3;

  printf("Insira o primeiro número: \n");
  scanf("%i",&num1);
  printf("Insira o segundo número: \n");
  scanf("%i",&num2);
  printf("Insira o terceiro número: \n");
  scanf("%i",&num3);

  if (num1 > num2 && num1 > num3)
    printf("O maior número é %i\n",num1);

  else if (num2 > num1 && num2 > num3)
    printf("O maior número é %i\n",num2);

  else if (num3 > num1 && num3 > num2){
    printf("O maior número é %i\n",num3);
  }

  if(num1 < num2 && num1 < num3)
    printf("O menor número é %i\n",num1);

  else if (num2 < num1 && num2 < num3)
    printf("O menor número é %i\n",num2);

  else if (num3 < num1 && num3 < num2)
    printf("O menor número é %i\n",num3);

  return 0;
}
