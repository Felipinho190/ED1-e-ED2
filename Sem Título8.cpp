#include<stdio.h>

main(){
	
	int vetor[5], i, soma = 0;
	float media = 0;
	 
	for(i = 0; i < 5; i++){
		printf("Digite um valor: ");
		scanf("%d", &vetor[i]);
		soma = soma + vetor[i];
	}
	
	media = soma / 5;
	
	for(i = 0; i < 5; i++){
		if(vetor[i] > media){
			printf("\nO numero %d esta acima da media", vetor[i]);
			}
	}
	
	for(i = 0; i < 5; i++){
		if(vetor[i] < media){
			printf("\nO numero %d esta abaixo da media", vetor[i]);
		}
	
	}	
}

