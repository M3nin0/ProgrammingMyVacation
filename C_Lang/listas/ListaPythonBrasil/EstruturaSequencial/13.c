/*

Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal,
 utilizando as seguintes fórmulas:

    Para homens: (72.7*h) - 58
    Para mulheres: (62.1*h) - 44.7 (h = altura)
    Peça o peso da pessoa e informe se ela está dentro, acima ou abaixo do peso.

*/

#include <stdio.h>
#include <string.h>

int main(void){

  float altura,ideal,peso;
  char sexo[20];

  printf("Insira seu peso: \n");
  scanf("%f",&peso);

  printf("Insira sua altura: \n");
  scanf("%f",&altura);

  printf("Você é homem ou mulher?\n");
  scanf("%s",&sexo);

  if (strcmp(sexo, "homem") == 0){

    ideal = (72.7 * altura) - 58;

    if (peso > ideal){
      printf("Você está acima do peso\n");
    }else{
      printf("Você está dentro do peso =D\n");
    }

  }else{

    ideal = (62.1*altura) - 44.7;

    if (peso > ideal){
      printf("Você está acima do peso\n");
    }else{
      printf("Você está dentro do peso =D\n");
    }

  }

  return 0;
}
