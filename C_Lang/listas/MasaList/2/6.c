//Calculando impostos

#include <stdio.h>

int main(void){

	float hora,value,sal,ir,inss,sd,sb,sl;	

	printf("Insira a quantidade que você ganha por hora: \n");
	scanf("%f",&value);
	printf("Insira as horas trabalhadas no mês: \n");
	scanf("%f",&hora);
	
	sb = value * hora;

	inss = 8 * (sb / 100);
	ir = 11 * (sb / 100);
	sd = 5 * (sb / 100);

	sl = sb - (inss + ir + sd);

	printf("+ Salário Bruto = R$ %.2f\n",sb);
	printf("- INSS(8%) = %.2f\n",inss);
	printf("- IR(11%) = %.2f\n",ir);
	printf("- Sindicato(5%) = %.2f\n",sd);
	printf("= Salário Líquido: R$ %.2f\n",sl);

	return 0;
}
