//Multiplos IF-ELSE

#include <stdio.h>

int main(){

	int idade;
	printf("Informe uma idade: \n");
	scanf("%i",&idade);

	if(idade <= 5)
		printf("Bebe\n");
	else if (idade > 5 && idade <= 10)
		printf("Criança\n");

	else if (idade > 10 && idade <= 15)
		printf("Adolescente\n");
	
	else if (idade > 15 && idade <= 18)
		printf("Jovem\n");

	else if (idade > 18 && idade <= 30)
		printf("Adulto\n");

	else
		printf("Velho\n");

	return 0;
}
