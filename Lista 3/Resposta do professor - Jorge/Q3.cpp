#include <stdio.h>
#include <stdlib.h>
/*
Escreva que solicite ao usu�rio um n�mero inteiro positivo (valide o valor digitado) 
e imprima todos os divisores do n�mero informado (excetuando o pr�prio n�mero).
*/
main() {
       // declara��o das vari�veis
       int n,i; 
       // solicita e valida os n�meros
       do {
           system("cls");
           printf("Informe um numero positivo maior que zero\n");
           scanf("%i",&n);
       } while (n<=0);
       // imprime todos os divisores de n
       i=1;
       while(i<n) {
          if (n%i==0) {
          	printf("%i\n",i);
          }
          i++;
       }
       system("pause");
}
