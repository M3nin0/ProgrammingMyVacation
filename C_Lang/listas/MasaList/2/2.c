//Ano bissexto

#include <stdio.h>

int main(void){

	int ano;

	printf("Insira um ano: \n");
	scanf("%i",&ano);

	if (ano % 4 == 0){
		printf("Ano bissexto\n");
	}else{
		printf("Não é bissexto\n");
	}
	

	return 0;
}
