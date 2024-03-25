#include<stdio.h>

void operacoes (int a, int b,  int *soma, int *subtracao){

	printf("a: %d \nb: %d \nSoma: %d \nSubtracao: %d", a, b, *soma, *subtracao);
}

main(){
	int a = 20, b = 20, soma = a+b, subtracao = a-b; 
	operacoes(a, b, &soma, &subtracao);
}


