//Fatorial

#include <stdio.h>

int main(void){

	int fat,new,num;
	new = 1; 

	printf("Insira o numero a ser calculado o fatorial: \n");
	scanf("%i",&num);

	for(fat = 1;fat <= num;fat++){
		new *= fat;
	}

	printf("%i\n",new);

	return 0;
}
