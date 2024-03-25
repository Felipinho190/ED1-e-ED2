#include<stdio.h>

void ordenar(int *a, int *b, int *c) {
    int temp;

    // Verifica se A é maior do que B e, se for, troca os valores de A e B
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    // Verifica se B é maior do que C e, se for, troca os valores de B e C
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    // Verifica novamente se A é maior do que B e, se for, troca os valores de A e B
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}
int main(){
	int a = 10, b = 9, c = 8;
	
	ordenar(&a,&b,&c);
	
	printf("Numeros ordenados: %d %d %d",a,b,c);
}

