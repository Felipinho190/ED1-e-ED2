#include<stdio.h>
main(){
	char nome[20];
	printf("Digite seu nome: ");
	fgets(nome,20,stdin);
	
	printf("O nome armazenado foi: %s",nome);
}