#include<stdio.h>
int quadrado (int num){
	int resultado;
	resultado = num*num;
	return resultado;
}

void main(){
	int x = quadrado(5);
	printf("x = %d",x);
}
