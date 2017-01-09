/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda,
 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:

    salário bruto.
    quanto pagou ao INSS.
    quanto pagou ao sindicato.
    o salário líquido.
    calcule os descontos e o salário líquido, conforme a tabela abaixo:
*/

#include <stdio.h>

int main(void){

    float h,hT,ir,inss,sind,sl,sb;

    printf("Quanto você ganha por hora: \n");
    scanf("%f",&h);
    printf("Quantas horas você trabalha por Mês? \n");
    scanf("%f",&hT);

    sb = h * hT;

    ir = sb * 0.11;
    inss = sb * 0.08;
    sind = sb * 0.05;

    printf("Seu salário bruto é: %.2f\n",sb);
    printf("Você paga %.2f para o IR\n",ir);
    printf("Você paga %.2f para o INSS\n",inss);
    printf("Você paga %.2f para o sindicato\n",sind);
    printf("E seu salario Liquido fica em: %.2f\n",(sb - (ir + inss + sind)));

  return 0;
}
