//Nota 

#include <stdio.h>

int main(void){

	int nota;

	printf("Insira uma nota: \n");
	scanf("%i",&nota);

	while(nota < 0 || nota > 10){
		printf("Valor invalido insira novamente!!!\n");
		scanf("%i",&nota);
	}
	printf("Nota comutada com sucesso!\n");

	return 0;
}
