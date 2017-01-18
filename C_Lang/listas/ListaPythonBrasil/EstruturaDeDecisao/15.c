/*
Faça um Programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo.
 Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

    Dicas:
    Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro;
    Triângulo Equilátero: três lados iguais;
    Triângulo Isósceles: quaisquer dois lados iguais;
    Triângulo Escaleno: três lados diferentes;
*/

#include <stdio.h>

int verTriangulo(void);

int main (void){
  verTriangulo();
}

int verTriangulo(void){

  int l1,l2,l3;

  printf("Insira o primeiro lado do triangulo: \n");
  scanf("%i",&l1);
  printf("Insira o segundo lado do triangulo:  \n");
  scanf("%i",&l2);
  printf("Insira o terceiro lado do triangulo: \n");
  scanf("%i",&l3);

  if (l1 == l2 && l1 == l3)
    printf("Triangulo equilátero\n");
  else if (l1 == l2 || l1 == l3 || l2 == l3)
    printf("Triangulo isósceles\n");
  else if (l1 != l2 && l1 != l3 && l2 != l3)
    printf("Triangulo escaleno\n");

}
