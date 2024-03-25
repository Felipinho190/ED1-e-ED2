#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Escreva um procedimento em C com protótipo 
void operacoes (int a, int b, int *soma, int *subtracao); 
que receba dois números inteiros e devolva a soma dos dois números em *soma e a subtração em
*subtracao. Crie o programa principal para testar a implementação.*/
void operacoes (int a, int b, int *soma, int *subtracao){
	soma = &a;
	soma = &b;
	
	*soma = a+b;
	*subtracao = a-b;
	
	printf("%d %d",*soma,*subtracao);

}
main(){
	int soma = NULL , sub = NULL;
	operacoes(8,2,&soma,&sub);
}

