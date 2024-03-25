#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

/*
Para passar um vetor para uma função usando linguagem C utiliza-se um ponteiro como parâmetro da função.
Ao usarmos o ponteiro como parâmetro, na realidade estamos passando o endereço inicial do vetor
e não os seus elementos.
*/

//prótotipo da função média 
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
	
	//chamada da função 
	media_notas = media(10,vnotas);
	
	printf("\nMedia = %.1f \n", media_notas);
	
	return 0;
	
}

/*  Função para cálculo de media 
	Parâmetros :
		Recebe a quantidade de elementos n
		Recebe o endereço inicial do vetor notas em *vnotas
	Retorno:
		Retorna a média na variável m
*/
float media(int n, float *vnotas){
	int i;
	float m = 0, soma = 0;
	
	//fazendo a somatória das notas
	for(i = 0; i < n; i++)
		soma = soma + vnotas[i];
		
	//dividindo pela quantidade de elementos n 
	m = soma / n;
	
	//retornando a media
	return m;
		
}




