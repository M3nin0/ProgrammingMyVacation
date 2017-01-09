//Operações matematicas

#include <stdio.h>

int main(void){

	int minhaIdade,idadeMae,idadePai,idadeIrmao;

	minhaIdade = 19;
	idadeMae = 38;
	idadePai = 42;
	idadeIrmao = 15;

	printf("Minha idade é: %d\nA idade da minha mae é: %i\nA idade do meu Pai é: %i\nA idade do meu irmão é: %i\n",minhaIdade,idadeMae,idadePai,idadeIrmao);
	printf("A soma das idades é %i\n",minhaIdade+idadeMae+idadePai+idadeIrmao);

	return 0;
}
