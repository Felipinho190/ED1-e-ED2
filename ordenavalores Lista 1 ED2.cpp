#include<stdio.h>
#include<stdlib.h>

/*4. Faça um procedimento que receba 3 números inteiros A, B e C, e ordena os valores de forma que A
passe a ter o menor valor e C o maior valor.*/

void ordena (int a,int b, int c){
	int maior = -999, menor = 999;
	
	if(a > maior)
		maior = a;
	if (c < menor)
		menor = b;
}

int main(){
	int a = 8, b = 4, c = 2;
	
	ordena(a,b,c);
	
}
