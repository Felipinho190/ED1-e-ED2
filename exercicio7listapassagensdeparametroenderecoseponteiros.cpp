#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Escreva um procedimento em C com prot�tipo 
void operacoes (int a, int b, int *soma, int *subtracao); 
que receba dois n�meros inteiros e devolva a soma dos dois n�meros em *soma e a subtra��o em
*subtracao. Crie o programa principal para testar a implementa��o.*/
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

