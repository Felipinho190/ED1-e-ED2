#include<stdio.h>
#include<math.h>
main(){
 	float distancia,v1,v2;
	printf("Digite o valor 1: ");
	scanf("%f",&v1);
	
	printf("Digite o valor 2: ");
	scanf("%f",&v2);
	
	distancia=pow(v1,v2);
	
	printf("%.1f",distancia);