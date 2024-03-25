#include<stdio.h>
#include<stdlib.h>
/*Considere o protótipo abaixo.
void incrementa_decrementa(int valor, int* inc, int* dec)
a)Implemente o procedimento do protótipo, que deve receber um valor
e devolver o valor incrementado em *inc e o valor decrementado em *dec.
void incrementa_decrementa(int valor, int* inc, int* dec){
	*inc = valor + 1);
	*dec = valor - 1;
}
b)Reescreva o programa de teste, completando o código para imprimir a saída esperada.
Saída esperada : 10 11 9

void incrementa_decrementa(int valor, int* inc, int* dec);

int main(){
	int a = 10, b, c;
	incrementa_decrementa(a,&b,&c);
	printf("%d %d %d",a,b,c);
}

void incrementa_decrementa(int valor, int* inc, int* dec){
	*inc = valor + 1;
	*dec = valor - 1;
}*/

void incrementa_decrementa(int valor, int* inc, int* dec);

int main(){
	int a = 10, b, c;
	incrementa_decrementa(a,&b,&c);
	printf("%d %d %d",a,b,c);
}
void incrementa_decrementa(int valor, int* inc, int* dec){
	*inc = valor + 1;
	*dec = valor - 1;
}
