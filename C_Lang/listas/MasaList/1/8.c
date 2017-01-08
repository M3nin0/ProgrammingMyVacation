//Fahrenheit to Celcius

#include <stdio.h>

int main(void){

	float C,F;

	printf("Insira a temperatura (F°)\n");
	scanf("%f",&F);
	
	C = (F - 32) / 1.8;

	printf("A temperatura fica %.2f C°\n",C);


	return 0;
}
