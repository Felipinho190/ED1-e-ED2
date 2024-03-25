#include<stdio.h>
main(){
	char a,b;
	
	printf("Digite a primeira letra: ");
	scanf("%c",&a);
	
	printf("Digite a segunda letra: ");
	fflush(stdin);
	scanf("%c",&b);
	
	printf("Caracteres digitados:  %c , %c ",a,b);
}