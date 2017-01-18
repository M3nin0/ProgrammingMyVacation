/*
Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.
 Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.
 */

#include <stdio.h>
#include <string.h>

 int main(void){

   char h[10];

   printf("Em qual horario você estuda? \nM-Matutino\nV-Vespertino\nN-Noturno\n:");
   scanf("%s",h);

   //((strcmp(letra,"a") == 0)
   if (strcmp(h,"M") == 0){
     printf("Bom dia\n");
   }else if (strcmp(h,"V") == 0){
     printf("Boa tarde\n");
   }else if (strcmp(h,"N") == 0){
     printf("Boa noite\n");
   }

   return 0;
 }
