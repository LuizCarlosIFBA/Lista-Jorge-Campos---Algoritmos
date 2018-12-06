/*
Escreva um programa para o c�lculo das propriedades geom�tricas de pol�gonos fechados 
(�rea, per�metro e centr�ide). O programa dever� solicitar o n�mero de v�rtices do pol�gono 
e imprimir todas as suas propriedades. 
Finalmente, o seu programa dever� imprimir as coordenadas dos v�rtices da caixa de contorno 
do pol�gono (Xa,Ya) e (Xb,Yb). A caixa de contorno � o menor ret�ngulo que envolve todo o pol�gono. 
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
main() {      
   int numVertices;          	// numero de vertices, variavel auxiliar
   float area,perimetro,xc,yc; // area,perimetro e coordenadas do centroide
   float xa,ya,xb,yb;          // coordenadas da caixa de contorno

   // le o numero de vertices
   do {
      printf("Informe o numero de vertices do poligono (>3): "); 
      scanf("%i",&numVertices);            
      system("cls");                 
   } while (numVertices<3); 
   
    
   float X[numVertices+1];   	// coordenadas X dos vertices 
   float verticesY[numVertices+1];  	// coordenadas X dos vertices 

   // le as coordenadas dos vertices
   for (int i=0;i<numVertices;i++) {
       printf("\nCoordenadas X e Y do vertice %i=",i); 
       scanf("%f %f",&X[i],&verticesY[i]);
   }
   // ultimo vertice igual ao primeiro (poligono fechado)
   X[numVertices]=X[0];
   Y[numVertices]=Y[0];
   
   // calcula a area
   area=0;
   for (int i=0;i<numVertices;i++) {
       area+=(X[i]*Y[i+1]-X[i+1]*Y[i])/2;
   }   
   // garante que a area sempre ser� positiva
   if (area<0) {
      area=-area;
   }      
   // calcula perimetro
   perimetro=0;
   for (int i=0;i<numVertices;i++) {
       perimetro+=sqrt(pow(X[i+1]-X[i],2)+ pow(Y[i+1]-Y[i],2));
   }   
   // calcula o centroide 
   xc=0;
   yc=0;   
   
   for (int i=0;i<numVertices;i++) {
       xc+=((X[i]+X[i+1])*((X[i]*Y[i+1]-X[i+1]*Y[i]))/(6*area));
       yc+=((Y[i]+Y[i+1])*((X[i]*Y[i+1]-X[i+1]*Y[i]))/(6*area));
   }
   // Determina��o as coordenadas do ret�ngulo de contorno
   xa=xb=X[0];
   ya=yb=Y[0];
   for (int i=1;i<numVertices;i++) {
       if (X[i]<xa) {
          xa=X[i];
       }
       if (X[i]>xb) {
          xb=X[i];
       }
       if (Y[i]<ya) {
          ya=Y[i];
       }
       if (Y[i]>yb) {
          yb=Y[i];
       }                             
   }
   // impress�o dos resultados  
   printf("area=%f m2\n",area);
   printf("perimetro=%f m\n",perimetro);
   printf("centroide=(%f,%f)\n",xc,yc);
   printf("retangulo de contorno=(%f,%f) e (%f,%f)\n",xa,ya,xb,yb);
   system("pause");
}
