#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Determine e explique o valor especificado em cada item abaixo
considerando que foram executadas todas as instru��es do c�digo a seguir
(assuma que o endere�o de v � 500, x � 1000 e de y � 1004).*/
int main(){
	int v[6] = {2,6,1,5,3,4}, x=1, y=2;
	int *p;
	p = &x;
	*p = *p + 1;
	p = &y;
	v[x+2] = x;
	
	printf("%d ",v[x+2]);
	*p = 7;
	printf("%d",&(*p));
	return 0;
}
/*ITEM       VALOR      COMENT�RIO
	x		   2	     x vale 2
	y          7         y vale 7
	*p         7         p aponta para y que vale 7
	v[4]       2         vetor na posi��o 4 vale 2
	v[x+3]     4         vetor na posi��o 5 vale 4
	&x         1000      o endere�o de x vale 1000
	&(*p)      1004     o endereco da vari�vel para qual o p aponta vale 1004
	&v[3]      512       o endereco do elemento da terceira posi��o do vetor vale 512*/
