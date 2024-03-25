#include<stdio.h>
float media (float n1 , float n2, float n3);
main(){
	float v1,v2,v3,resultado;
	printf("Digite a nota 1: ");
	scanf("%f",&v1);
	
	printf("Digite a nota 2: ");
	scanf("%f",&v2);
	
	printf("Digite a nota 3: ");
	scanf("%f",&v3);
	
	resultado =media(v1,v2,v3);
	
	printf("A sua media e igual a  %.2f",resultado);
	return 0;
}

float media (float n1, float n2, float n3){
	float res;
	res=(n1+n2+n3)/3;
	return res;
}