#include<stdio.h>
main(){
	char nome[30];
	float salario;
	
	printf("Digite seu nome: ");
	fgets(nome,30,stdin);
	
	printf("Digite o valor do seu salario atual: ");
	scanf("%f",&salario);
	
	if(salario>2000){
		printf("Seu novo salario e de : %.2f",salario);
	}
	else{
		salario*=1.03;
		printf("Seu novo salario sera de : %.2f",salario);
	}
	
}