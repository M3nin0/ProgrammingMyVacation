//Defina o triangulo

#include <stdio.h>


int main(void){

	int lA,lB,lC;

	printf("Insira o valor de lA: \n");
	scanf("%i",&lA);
	printf("Insira o valor de lB: \n");
	scanf("%i",&lB);
	printf("Insira o valor de lC: \n");
	scanf("%i",&lC);

	if (lA == lB && lA == lC){
		printf("Triangulo equilátero!!!\n");
	}else if(lA == lB ||lA == lC ||lB == lC){
		printf("Triangulo isosceles\n");
	}else{
		printf("Triangulo escaleno\n");
	}

	return 0;
}
