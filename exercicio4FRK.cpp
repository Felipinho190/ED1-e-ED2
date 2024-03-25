#include<stdio.h>
#include<math.h>
main(){
	float valor,comissao,comissao2;
	
	printf("Qual o valor de vendas do mes? ");
	scanf("%f",&valor);
	
	comissao=valor*(2.5/100);  
	comissao2=valor*(3.2/100);
		  
	if(valor<50000){
		printf("Valor da comissao: %.2f",comissao);
	}
	else{
		printf("Valor da comissao: %.2f",comissao2);
	}
		
}