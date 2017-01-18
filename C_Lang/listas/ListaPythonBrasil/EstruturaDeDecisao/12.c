/*
Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos
são do Imposto de Renda, que depende do salário bruto (conforme tabela abaixo) e 3% para o
Sindicato e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita).
O Salário Líquido corresponde ao Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor
da sua hora e a quantidade de horas trabalhadas no mês.

    Desconto do IR:
    Salário Bruto até 900 (inclusive) - isento
    Salário Bruto até 1500 (inclusive) - desconto de 5%
    Salário Bruto até 2500 (inclusive) - desconto de 10%
    Salário Bruto acima de 2500 - desconto de 20% Imprima na tela as informações,
    dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220.

            Salário Bruto: (5 * 220)        : R$ 1100,00
            (-) IR (5%)                     : R$   55,00
            (-) INSS ( 10%)                 : R$  110,00
            FGTS (11%)                      : R$  121,00
            Total de descontos              : R$  165,00
            Salário Liquido                 : R$  935,00
*/

#include <stdio.h>

int main(void){

  float Sb,Sl,ir,fgts,inss,irDesc,h,vH,total;



  printf("Insira quantas horas você trabalha por dia:  \n");
  scanf("%f",&h);
  printf("Insira o valor de sua hora; \n");
  scanf("%f",&vH);

  Sb = (h * vH);

  //Desconto do IR
  if (Sb <= 900){
    irDesc = 0;
  }else if (Sb > 901 && Sb <= 1500){
    irDesc = 5;
  }else if (Sb > 1500 && Sb <= 2500){
    irDesc = 10;
  }else if (Sb > 2500){
    irDesc = 20;
  }

  ir = (Sb * irDesc) / 100;
  inss = (Sb * 10) / 100;
  fgts = (Sb * 11) / 100;
  total = (ir + inss + fgts);

  printf("Salario bruto:  (%.2f * %.2f)  R$%.2f\n",h,vH, Sb);
  printf("IR:   %.2f\n", ir);
  printf("INSS: %.2f\n",inss);
  printf("FGTS:  %.2f\n",fgts);
  printf("Total de descontos: %.2f\n",total);
  printf("Salario liquido: %.2f\n",(Sb - total));


  return 0;
}
