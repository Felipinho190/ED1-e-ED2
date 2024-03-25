#include<stdio.h>
main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade<18){
		printf("Voce nao pode adquirir nenhuma apolice");
	}
	if(idade>=18 && idade<=24){
		printf("Grupo de risco baixo");
	}
	if(idade>=25 && idade<=40){
		printf("Grupo de risco medio");
	}
	if(idade>=41 && idade<=70){
		printf("Grupo de risco alto");
	}
}