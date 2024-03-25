#include<stdio.h>

void operacoes (int a, int b,  int *soma, int *subtracao){

	printf("a: %d \nb: %d \nSoma: %d \nSubtracao: %d", a, b, *soma, *subtracao);
}

main(){
	int a,b;
	
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	
	printf("Digite o valor de b: ");
	scanf("%d",&b);
	
	int soma = a+b, subtracao = a-b; 
	operacoes(a, b, &soma, &subtracao);
}


