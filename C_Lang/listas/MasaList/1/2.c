//Converta metros em milimetros

#include <stdio.h>

int main(void){

	float metros;

	printf("Insira a quantidade de metros: \n");
	scanf("%f",&metros);

	printf("O valor em milimentros é: %.2f\n",(metros * 1000));


	return 0;
}
