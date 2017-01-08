//Calculando o tempo de uma viagem

#include <stdio.h>

int main(void){

	int dist, velMedia, tempo;

	printf("Qual a distancia a ser percorrida na viagem?\n");
	scanf("%i", &dist);
	printf("Qual a velocidade media (Em KM/H)?\n");
	scanf("%i",&velMedia);

	tempo = dist / velMedia;

	printf("A viagem será feita em %i horas\n",tempo);

	return 0;
}
