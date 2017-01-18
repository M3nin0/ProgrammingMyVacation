/*
Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre,
e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:

      Média de Aproveitamento  Conceito
      Entre 9.0 e 10.0        A
      Entre 7.5 e 9.0         B
      Entre 6.0 e 7.5         C
      Entre 4.0 e 6.0         D
      Entre 4.0 e zero        E

O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem “APROVADO”
se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.
*/

#include <stdio.h>
#include <string.h>


int reveNota(void);

int main(void){

  reveNota();

}

int reveNota(void){

  float n1,n2,n3,n4,nF;
  char *conceito;

  printf("Insira a primeira nota: \n");
  scanf("%f",&n1);
  printf("Insira a segunda nota: \n");
  scanf("%f",&n2);
  printf("Insira a terceira nota: \n");
  scanf("%f",&n3);
  printf("Insira a quarta nota: \n");
  scanf("%f",&n4);

  nF = (n1 + n2 + n3 + n4) / 4;

  if (nF <= 4)
    conceito = "e";
  else if (nF > 4 && nF <= 6)
    conceito = "d";
  else if (nF > 6 && nF <= 7.5)
    conceito = "c";
  else if (nF > 7.5 && nF <= 9)
    conceito = "b";
  else if (nF > 9)
    conceito = "a";

  if (strcmp(conceito,"e") == 0)
    printf("Reprovado\n");
  else if (strcmp(conceito,"d") == 0)
    printf("Aprovado pelo conselho\n");
  else if (strcmp(conceito,"c") == 0)
    printf("Aprovado\n");
  else if (strcmp(conceito,"b") == 0)
    printf("Aprovado com tranquilidade\n");
  else if (strcmp(conceito,"a") == 0)
    printf("Aprovado com distinção =D\n");

  return 0;
}
