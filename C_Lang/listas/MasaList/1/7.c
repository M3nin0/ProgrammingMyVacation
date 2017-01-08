//Celcius to Fahrenheit

#include <stdio.h>

int main(void){

	float C,F;

	printf("Insira a temperatura (C°)\n");
	scanf("%f",&C);
	
	F =((9 * C ) / 5) + 32;
	
	printf("A temperatura em F° é: %.2f\n",F);

	return 0;
}
