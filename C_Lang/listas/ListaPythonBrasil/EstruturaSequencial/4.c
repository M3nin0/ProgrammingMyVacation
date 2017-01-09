//Faça um Programa que peça as 4 notas bimestrais e mostre a média.

#include <stdio.h>

int main(void){

  float n1,n2,n3,n4,media;

  printf("Insira a primeira nota: \n");
  scanf("%f",&n1);
  printf("Insira a segunda nota: \n");
  scanf("%f",&n2);
  printf("Insira a terceira nota: \n");
  scanf("%f",&n3);
  printf("Insira a quarta nota: \n");
  scanf("%f",&n4);

  media = (n1 + n2 + n3 + n4) / 4;

  printf("A média é %.2f\n",media);

  return 0;
}
