//IF-ELSE

#include <stdio.h>

int main(void){

	int idade;
	
	printf("Favor informar idade:\n");
	scanf("%i",&idade);
	
	if(idade <= 9){
		printf("Você é um bebe\n");
	}else if(idade >= 10 && idade <= 18){
		printf("Você é um jovem\n");
	}else if(idade > 18 && idade <= 99){
		printf("A cerveja está liberada\n");
	}
	
	else{
		printf("Insira a idade corretamente!!!\n");
	}

	return 0;
}
