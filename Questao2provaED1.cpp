#include<stdio.h>
#include<stdlib.h>

//Qual � o valor de *p e *q ap�s a execu��o do seguinte c�digo:
int main(){
	int a = 3, b = 2, *p = NULL, *q = NULL;
	p = &a;
	q = &b;
	
	//q = 8;
	*q = *p + 5;
	//q = 9;
	b = b + 1;
	
	printf("%d %d", *q, *p);
}
//RE: *p = 3 *q = 9;
