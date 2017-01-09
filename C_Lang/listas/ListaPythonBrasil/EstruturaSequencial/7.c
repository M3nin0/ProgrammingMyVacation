//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>

int main(void){


  int l1,Al;

  printf("Insira o valor de um dos lados do quadrado: \n");
  scanf("%i",&l1);

  Al = l1 * l1;

  printf("A área do quadrado é %i e seu dobro é %i\n",Al,(Al * 2));

  return 0;
}
