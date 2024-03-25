#include<stdio.h>
int quadrado (int num){
	int resultado;
	resultado = num*num;
	return resultado;
}

int main(void){
	int x = quadrado(6);
	printf("x = %d",x);
}