//Aumento de salario

#include <stdio.h>

int main(void){

	float sal,aum,novoSal;

	printf("Qual seu salario atual?\n");
	scanf("%f",&sal);
	printf("QUal será o aumento de seu salario?\n");
	scanf("%f",&aum);
	
	novoSal = sal + (sal * (aum / 100));	

	printf("O novo salario é %.2f\n",novoSal);

	return 0;
}
