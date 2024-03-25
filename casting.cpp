#include<stdio.h>
main(){
	char nome [30];
	
	printf("Digite o seu nome: ");
	gets(nome);
	
	printf("O nome digitado foi %s",nome);
}