//Calculo do valor excedente

#include <stdio.h>

int main(void){

	float peso,acima;
	
	printf("Qual foi o peso pescado: \n");
	scanf("%f",&peso);

	if (peso <= 50){
		printf("Você esta dentro dos padrões\n");
	}else{
		acima = (peso - 50) * 4;
		printf("Você está acima do peso e terá de pagar R$ %.2f\n",acima);	
	}

	return 0;
}
