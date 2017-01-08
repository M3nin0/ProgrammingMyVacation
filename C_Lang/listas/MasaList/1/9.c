//Calculando o valor do carro

#include <stdio.h>


int main(void){

	float km,dias,total;

	printf("Quantos dias o carro ficou alugado?\n");
	scanf("%f",&dias);
	printf("Quantos Km foram rodados com o carro?\n");
	scanf("%f",&km);
	
	total = (km * 0.15) + (dias * 60);

	printf("Você ira pagar pelo carro %.2f reais\n",total);

	return 0;
}
