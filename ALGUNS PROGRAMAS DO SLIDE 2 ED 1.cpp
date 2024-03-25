#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 100

int main(int argc, char **argv){
	int x,y;
	int *px,*py;
	x = 1; //atribui à varíavel x o valor 1.
	y = 2; //atribui à variável y o valor 2.
	px = &x; //atribui ao ponteiro px o endereco da variavel x.
	py = &y; //atribui ao ponteiro py o endereco da varivel y
	
	printf("O endereco de x eh %x e o valor de x eh %d\n",px,*px);
	printf("O endereco de y eh %d e o valor de y eh %d",py,*py);
}
