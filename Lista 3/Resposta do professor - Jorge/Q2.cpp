/* 
Escreva um programa que solicite um n�mero inteiro positivo e imprima o fatorial 
do n�mero informado.
*/
#include <stdlib.h>
#include <stdio.h>
main() {
       // declara��o das vari�veis
       int numero,fatorial;
       // solicita e valida o n�mero
       do {
           system("cls");
           printf("Informe um numero positivo\n");
           scanf("%i",&numero);
       } while (numero<0);
 	   fatorial=1;
       for (int parcela=numero;parcela>=1;parcela--) {
        	 fatorial=fatorial*parcela;      	
       }
       printf("Fatorial=%i\n",fatorial);
       system("pause");
}
