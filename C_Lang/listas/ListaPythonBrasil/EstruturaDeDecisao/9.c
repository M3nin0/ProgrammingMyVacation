//Faça um Programa que leia três números e mostre-os em ordem decrescente.

#include <stdio.h>

int main(void){

  int num1,num2,num3;

  printf("Insira o primeiro valor: \n");
  scanf("%i",&num1);
  printf("Insira o segundo valor: \n");
  scanf("%i",&num2);
  printf("Insira o terceiro valor: \n");
  scanf("%i",&num3);

  if(num1 > num2 && num1 > num3){
    printf("%i\n",num1);
    if (num2 > num3){
      printf("%i\n",num2);
      printf("%i\n",num3);
    }else
      printf("%i\n",num3);
      printf("%i\n",num2);

  }

  if (num2 > num1 && num2 > num3){
    printf("%i\n",num2);

    if (num1 > num3){
      printf("%i\n",num1);
      printf("%i\n",num3);
    }else
      printf("%i\n",num1);
      printf("%i\n",num3);
  }

    if (num3 > num1 && num3 > num2){
    printf("%i\n",num3);

    if(num1 > num2){
      printf("%i\n",num1);
      printf("%i\n",num2);
    }else
      printf("%i\n",num2);
      printf("%i\n",num3);
  }

  return 0;
}
