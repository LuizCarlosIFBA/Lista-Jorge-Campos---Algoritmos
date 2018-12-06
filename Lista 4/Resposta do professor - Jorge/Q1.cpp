/* 
Escreva um programa que solicite ao usu�rio que informe o 
n�mero de alunos na turma. Garanta que o n�mero de alunos � 
maior que zero. 
O seu programa dever� solicitar tamb�m as 
notas dos alunos em uma avalia��o. 
As notas devem ser valores entre 0 e dez, inclusive. 
N�o aceite notas fora deste intervalo. 
Ap�s a leitura das notas, o programa dever� informar a maior 
e a menor nota, a m�dia, a mediana e o desvio padr�o. 
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	// declara��o de vari�veis
	int numAlunos;
	int maiorNota,menorNota;
	float media,mediana,desvioPadrao;
	float soma,somadif,temp;
	
	
	// Leitura e valida��o do numero de alunos
	do {
		system("cls");
		printf("Informe o numero de alunos");
		scanf("%i",&numAlunos);
	} while (numAlunos<=0);
	// declara��o do vetor para armazenar as notas dos alunos
	float notas[numAlunos];
	// leitura das notas
	for (int i=0;i<numAlunos;i++) {
		do {
			system("cls");
			printf("Informe a nota do %io. aluno",i+1);
			scanf("%f",&notas[i]);
		} while (notas[i]<0 || notas[i]>10);
	}
	
	// Varre o vetor para determinar a maior, menor e soma das notas
	soma=notas[0];
	maiorNota=notas[0];
	menorNota=notas[0];	
	for (int i=1;i<numAlunos;i++) {
		if (notas[i]<menorNota) {
			menorNota=notas[i];
		}
		if (notas[i]>maiorNota) {
			maiorNota=notas[i];
		}			
		soma=soma+notas[i];
	}
	// calculo da m�dia
	media=soma/numAlunos;
	// calculo do desvio padrao
	somadif=0;
	for (int i=0;i<numAlunos;i++) {
		somadif=somadif+pow(notas[i]-media,2);
	}	
	desvioPadrao=sqrt(somadif/(numAlunos-1));
	// ordena o vetor para calculo da mediana
	for (int i=0;i<numAlunos-1;i++) {
		for (int j=i+1;j<numAlunos;j++) {
			if (notas[i]>notas[j]) {
				temp=notas[i];
				notas[i]=notas[j];
				notas[j]=temp;
			}
		}
	}	
	// calculo da mediana
	if (numAlunos%2==0) {
		mediana=(notas[numAlunos/2-1]+notas[numAlunos/2])/2;
	}
	else {
		mediana=notas[numAlunos/2];	
	}	
	system("cls");
	printf ("Menor Nota=%i\n",menorNota);	
	printf ("Maior Nota=%i\n",maiorNota);
	printf ("Media=%f\n",media);
	printf ("Mediana=%f\n",mediana);
	printf ("Desvio Padrao=%f\n",desvioPadrao);
	system("pause");
}
