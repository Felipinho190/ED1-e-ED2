#include<stdio.h>
#include<math.h>
main(){
	/*Construa um programa que calcule a quantidade de latas de
tinta necessárias e o custo para pintar tanques cilíndricos de
combustível, onde são fornecidos a altura e o raio desse
cilindro.
Sabendo que:
- a lata de tinta custa R$20,00
- cada lata contém 5 litros
- cada litro de tinta pinta 3 metros quadrados.
e que:
Área do cilindro= 2 vezes a área da base + circunferencia da base
vezes a altura
e que raio e altura são dados de entrada.*/
	float altura, raio, areaCilindro, qtdadeLitros, qtdadeLatas, custo;
 	printf ("\nDigite o valor da altura em metros: ");
 	scanf ("%f",&altura);

 	printf ("\nDigite o valor do raio em metros: ");
 	scanf ("%f",&raio);
 
 	areaCilindro=2*3.14*raio*raio + 2*3.14*raio*altura;
 	printf ("\nA area do cilindro eʼ %.2f metros quadrados", areaCilindro);
	
	qtdadeLitros=areaCilindro/3;
 	
 	printf ("\nA qtidade de litros necessaria eʻ de %.2f ", qtdadeLitros);
 	qtdadeLatas=qtdadeLitros/5;
 	
 	printf ("\nA qtidade de latas necessaria eʼ de %.2f ", qtdadeLatas);
 	custo=qtdadeLatas*20;
 	
 	printf ("\nO valor total das tintas eʼ de R$ %.2f \n", custo); 
	
}