#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

/*
Para passar um vetor para uma fun��o usando linguagem C utiliza-se um ponteiro como par�metro da fun��o.
Ao usarmos o ponteiro como par�metro, na realidade estamos passando o endere�o inicial do vetor
e n�o os seus elementos.
*/

//pr�totipo da fun��o m�dia 
float media(int n, float *vnotas);

int main(){
	float vnotas[10];
	float media_notas;
	int i;
	
	/*Leitura das notas */
	for(i = 0; i < 10; i++){
		printf("Digite os valores das notas: ");
		scanf("%f",&vnotas[i]);
	}
	
	//chamada da fun��o 
	media_notas = media(10,vnotas);
	
	printf("\nMedia = %.1f \n", media_notas);
	
	return 0;
	
}

/*  Fun��o para c�lculo de media 
	Par�metros :
		Recebe a quantidade de elementos n
		Recebe o endere�o inicial do vetor notas em *vnotas
	Retorno:
		Retorna a m�dia na vari�vel m
*/
float media(int n, float *vnotas){
	int i;
	float m = 0, soma = 0;
	
	//fazendo a somat�ria das notas
	for(i = 0; i < n; i++)
		soma = soma + vnotas[i];
		
	//dividindo pela quantidade de elementos n 
	m = soma / n;
	
	//retornando a media
	return m;
		
}




