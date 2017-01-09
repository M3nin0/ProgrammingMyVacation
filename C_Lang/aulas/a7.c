#include <stdio.h>

int main(void){

	int base,alt,area;

	printf("Insira o valor da base: ");
	scanf("%i",&base);
	printf("Insira o valor da altura: ");
	scanf("%i",&alt);

	area = base * alt;

	printf("O valor da area do retangulo é: %i\n",area);

	return 0;
}
