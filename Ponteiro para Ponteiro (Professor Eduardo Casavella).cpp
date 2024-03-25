#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 100

int main(int argc, char **argv){
	int x, *y, **z;
	
	//inicializando a variavel com zero
	x = 0;
	printf("\nValor de x = %d\n",x);
	printf("Endereco de x = %x\n\n",&x);
	
	//Atribuindo os enderecos para os ponteiros 
	y = &x; //y aponta para x 
	z = &y; // z aponta para y
	
	*y = *y + 10;
	printf("\nValor de x = %d", x);
	printf("\nEndereco apontado por y: %x\n",y);
	printf("Valor da variavel X que esta sendo apontada por y: %d\n",*y);
	printf("Endereco de memoria da variavel y %x\n",&y);
	
	**z = **z + 10;
	printf("\nValor de x = %d", x);
	printf("\nEndereco apontado por **z: %x\n",z);
	printf("Valor da variavel X para a qual z faz referencia : %d\n",**z);
	printf("Endereco de memoria da variavel **z %x\n",&z);
	
}
