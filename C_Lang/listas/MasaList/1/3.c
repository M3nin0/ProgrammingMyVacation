//Leia e transforme em minutos

#include <stdio.h>

int main(void){

	int dias, horas,min,seg,total;
	
	printf("Insira os dias:\n");
	scanf("%i",&dias);
	printf("Insira as horas: \n");
	scanf("%i",&horas);
	printf("Insira os minutos: \n");
	scanf("%i",&min);
	printf("Insira os segundos: \n");
	scanf("%i",&seg);

	total = (dias * 24 * 60 * 60)+(horas * 60 * 60)+(min * 60)+seg;

	printf("O total em segundo é %i\n",total);

	return 0;
}
