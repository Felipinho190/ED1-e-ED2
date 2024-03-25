#include <stdio.h>
#include <math.h>
main()
{
	/*Construa um programa que tendo como entrada dois pontos
	quaisquer do plano P(x1,y1) e Q(x2,y2), imprima a distância
	entre eles. A fórmula da distância é:*/
 	float x1, y1, x2, y2;
 	float distancia;
 	printf ("\nDigite o valor de x1: ");
 	scanf ("%f",&x1);
 
 	printf ("\nDigite o valor de y1: ");
 	scanf ("%f",&y1);
 
 	printf ("\nDigite o valor de x2: ");
 	scanf ("%f",&x2);
 
 	printf ("\nDigite o valor de y2: ");
 	scanf ("%f",&y2);
 
 	distancia=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
 printf ("\nA distancia entre os pontos P1 e P2 e %.2f\n", distancia); 
 
 }