#include<stdio.h>
#define ICMS 0.18 //declaração da constante
float icms(float v1,float v2){
	int resultado;
	resultado = v1 * v2;
	return resultado;
}
int main(){
	float preco_produto,valor_icms,valor_total;
	const float frete = 10.50;
	
	printf("Informe o valor do produto: ");
	scanf("%f",&preco_produto);
	//const tipo nome_da_constante = valor_da_constante
	
	valor_icms = icms(preco_produto,ICMS);
	
	valor_total = valor_icms + preco_produto + frete;
	
	printf("Valor de imposto  a ser pago: R$ %.2f\n",valor_icms);
	printf("Valor total a ser pago: %.2f\n",valor_total);
	
}

	
