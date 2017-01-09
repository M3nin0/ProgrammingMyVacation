//Switch

#include <stdio.h>

int main(void){

	int num;

	printf("Insira um número inteiro de 1 a 5\n");
	scanf("%i",&num);

	switch (num) {
		case 1:
			printf("Um\n");
			break; // Break para não ir para o proximo

		case 2:
			printf("Dois\n");
			break;

		case 3:
			printf("Três\n");
			break;

		case 4:
			printf("Quatro\n");
			break;

		case 5:
			printf("Cinco\n");
			break;
		default:
			printf("Opção invalida!!!\n");
			break;
	}

	return 0;
}
