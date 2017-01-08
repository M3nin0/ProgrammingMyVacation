//População dos paises

#include <stdio.h>

int main(void){

	int pA = 80000;
	int pB = 200000;
	int cA = 80000 * 3.0;
	int cB = 200000 * 1.5;
	int c = 0;

	while(pA <= pB){
		pA += cA;
		pB += cB;
		c += 1;
	}

	printf("Ira levar %i anos para a população A alcançar a B\n",c);
	
	return 0;
}
