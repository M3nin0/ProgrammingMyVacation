//O maior dos números

#include <stdio.h>

int main(void){

	int num1,num2,num3;

	printf("Insira um número: \n");
	scanf("%i",&num1);
	printf("Insira o segundo número: \n");
	scanf("%i",&num2);
	printf("Insira o terceiro número: \n");
	scanf("%i",&num3);

	if (num1 > num2 && num1 > num3){
		printf("O número %i é o maior\n",num1);
	}else if (num2 > num1 && num2 > num3){
		printf("O número %i é o maior\n",num2);
	}else if (num3 > num1 && num3 > num2){
		printf("O número %i é o maior\n",num3);
	}else{
		printf("São iguais\n");
	}

	return 0;
}
