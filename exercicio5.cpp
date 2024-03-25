#include<stdio.h>
main(){
	float salario;
	printf("Digite o valor do seu salario: ");
	scanf("%f",&salario);
	
	if(salario<=300){
	salario= salario*1.5;
	printf("Salario reajustado: R$:%.2f",salario);
	}
	else{
	salario=salario*1.3;
	printf("Salario reajustado: R$:%.2f",salario);
	}
	
}
