//Loja de tintas

#include <stdio.h>

int main(void){ 

	int metros,value,latas;

	printf("Insira a quantidade de metros a ser pintado: \n");
	scanf("%i",&metros);
	
	latas = metros / 3;
	value = latas * 80;	

	printf("Você terá de comprar %i latas\n",latas);
	printf("E isso custará %i \n",value);

	return 0;
}
