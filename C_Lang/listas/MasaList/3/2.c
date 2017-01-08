//User and password

#include <stdio.h>

int main(void){

	char user[20];
	char pass[20];

	printf("Insira o usuário: \n");
	scanf("%s",user); //Não utilizar '&' em string
	printf("Insira a senha: \n");
	scanf("%s",pass);

	while(strcmp(user,pass) == 0){
		printf("O usuário e a senha não podem ser iguais\n");
		printf("Insira o usuário: \n");
		scanf("%s",&user);
		printf("Insira a senha: \n");
		scanf("%s",&pass);
	}

	printf("Cadastro realizado com sucesso!!!\n");

	return 0;
}
