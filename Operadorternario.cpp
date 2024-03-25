#include<stdio.h>
int main(){
	int numero;
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	numero>= 0 ? numero++ : numero--;
	
	printf("O novo valor de numero e: %d ",numero);
	/*if(numero>=0)
	numero++;
	else
	numero--;*/
	
}