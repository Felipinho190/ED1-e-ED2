#include<stdio.h>
main(){
	int valor;
	printf("Digite um numero: ");
	scanf("%d",&valor);
	
	if(valor>0)
		printf("POSITIVO");
		
	else if(valor<0)
		printf("NEGATIVO");
		
	else
	printf("ZERO");
	
}