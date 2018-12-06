/* 
Escreva um programa que solicite um n�mero qualquer e informe o valor 
do logaritmo neperiano deste n�mero. Considere para o c�lculo do resultado que o 
logaritmo neperiano � obtido pelos 100 primeiros elementos da s�rie abaixo. 
*/
 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	double x,ln;

		/* entrada de dados */
		printf("Informe o numero que deseja calcular o logaritmo neperiano");
		scanf("%lf",&x);
		// calcula o valor de ln pela s�rie
		int sinal=1;
   		ln=0;
   		for (int i=1;i<=100;i++) {
      		ln = ln + sinal*pow(x-1, i)/i;
      		sinal=-sinal;
   		}
		printf("ln=%lf\n",ln);		

	system("pause");	
}
