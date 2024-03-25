#include<stdio.h>
main(){
	float salario;
	printf("Digite seu salario:");
	scanf("%f",&salario);
	
	if(salario>=500){	
	printf("Voce nao se qualifica para o aumento");	
	}
	else{
	salario = salario*1.3;		
		printf("Novo salario: R\$:%.2f",salario);
	}
	
}
