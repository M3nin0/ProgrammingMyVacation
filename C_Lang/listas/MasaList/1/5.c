//Calculando o desconto

#include <stdio.h>

int main(void){

	float preco, desc,newValue;
	
	printf("Insira o preço do produto: \n");
	scanf("%f",&preco);
	printf("Insira o valor do desconto: \n");
	scanf("%f",&desc);
	
	newValue = preco - (preco * (desc / 100));

	printf("O produto passa a custar: %.2f\n",newValue);

	return 0;
}
