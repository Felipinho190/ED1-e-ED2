#include<stdio.h>
main(){
	float valor,comissao;
	
	printf("Digite o valor de vendas do mes: ");
	scanf("%f",&valor);
	
	if(valor<100000){
		comissao=valor*(2.0/100);
		printf("Sua comissao sera de: %.2f",comissao);
	}
	if(valor>100000 && valor<=200000){
		comissao=valor*(2.5/100);
		printf("Sua comissao sera de: %.2f ",comissao);
	}
	if(valor>200000){
		comissao=valor*(3.0/100);
		printf("Sua comissao sera de: %.2f",comissao);
	}
	if(valor<0)
	printf("Valor invalido");

}