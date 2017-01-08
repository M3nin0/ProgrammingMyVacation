//Fibonacci

#include <stdio.h>

int main(void){

	int a,b,c,max;

	a = 0;
	b = 1;
	c = 0;

	printf("Insira qual o valor maximo para o Fibonacci: \n");
	scanf("%i",&max);

	while(c <= max){
		c = a + b;
		printf("%i\n",c);
		a = b;
		b = c;		
	}

	return 0;
}
