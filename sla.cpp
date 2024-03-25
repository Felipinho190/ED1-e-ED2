#include <stdio.h> 
#include<stdlib.h> 
#define LIN 4 
#define COL 6 

/*Reescreva o programa abaixo usando ponteiros, ajustando a declaração do vetor através de alocação 
dinâmica e os acessos ao vetor através da aritmética de ponteiros.*/ 

int main(int argc, char *argv[]) { 

	int **mat,i,j; 

	// aloca um vetor de LIN ponteiros para linhas 
	mat = (int**)malloc (LIN * sizeof (int)); 
	
	// aloca cada uma das linhas (vetores de COL inteiros) 
	for (i=0; i < LIN; i++) 

	mat[i] = (int*)malloc (COL * sizeof (int)) ; 

	// percorre a matriz 
	for (i=0; i < LIN; i++){ 
		for (j=0; j < COL; j++){ 

			mat[i][j] = 1 ; // acesso com sintaxe mais simples 

			printf("%d ", mat[i][j]); 

		} 

		printf("\n");
} 
	// libera a memória da matriz 
	for (i=0; i < LIN; i++) 

		free (mat[i]) ; 
		free (mat) ; 

		return 0; 
} 

 
