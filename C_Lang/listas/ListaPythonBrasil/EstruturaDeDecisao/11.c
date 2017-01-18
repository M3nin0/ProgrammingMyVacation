/*
As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e
lhe contraram para desenvolver o programa que calculará os reajustes.

    Faça um programa que recebe o salário de um colaborador e o reajuste segundo o
    seguinte critério, baseado no salário atual:
    salários até R$ 280,00 (incluindo) : aumento de 20%
    salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
    salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
    salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
    o salário antes do reajuste;
    o percentual de aumento aplicado;
    o valor do aumento;
    o novo salário, após o aumento.


*/

#include <stdio.h>

int main(void){

  float salario,aumt,antSalario,perc;

  printf("Insira seu salario: \n");
  scanf("%f",&salario);

  if (salario <= 280){
    perc = 20;

  }else if (salario > 281 && salario < 700){
    perc = 15;

  }else if (salario > 700 && salario < 1500){
    perc = 10;

  }else if (salario > 1500){
    perc = 5;
  }

  antSalario = salario;
  aumt = (salario * perc) / 100;
  salario += aumt;

  printf("Seu salario era %.2f\n",antSalario);
  printf("A porcentagem de aumento foi %.2f\n", perc);
  printf("O valor do aumento %.2f\n", aumt);
  printf("Seu novo salario é %.2f\n",salario);

  return 0;
}
