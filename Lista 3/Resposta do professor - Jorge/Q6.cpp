/*
Escreva um programa que calcule e imprima o valor de PI utilizando pelo menos vinte 
termos de cada s�rie. O seu programa dever� informar, ainda, qual das s�ries 
(o somat�rio ou produt�rio) converge mais rapidamente. 
Considere para isto que o valor de PI  3.141592653589793
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
      float pis,pip,pi;
      int i,sinal;
      float difs,difp;
      pi=M_PI;
      pis=0;
      sinal=1;
      // Calculo e impress�o parcial do resultado considerando o somat�rio
      printf("Valores parciais do somat�rio\n");
      for (i=1;i<=41;i=i+2) {
          pis=pis+ sinal*4./i;
          sinal=-sinal;
          printf("%f\n",pis);
      }
      // Calculo e impress�o parcial do resultado considerando o produt�rio
      printf("Valores parciais do produt�rio\n");
      pip=4;
      printf("%f\n",pip);
      for (i=3;i<=21;i=i+2) {
          pip=pip*(i-1)/i;
          printf("%f\n",pip);
          pip=pip*(i+1)/i;
          printf("%f\n",pip);          
      }
      difs=fabs(pis-pi);
      difp=fabs(pip-pi);
      if (difs>difp) {
           printf("produtorio converge mais rapido");
      }
      else {
           printf("somatorio converge mais rapido");
      }
      system("pause");
}
