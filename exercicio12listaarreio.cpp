#include<stdio.h>
void lervetor();
main(){	
	lervetor();	
}
void lervetor(){
	int vetor[5], i, maior = 0, menor = vetor[0];

	for(i = 0; i < 5; i++){
		printf("Digite um valor: ");
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < 5; i++){
		printf("\nO valor do vetor na posicao %d e: %d", i, vetor[i]);
	}
	
	for(i = 0; i < 5; i++){
		if(vetor[i] >= maior){
			maior = vetor[i];
		}
	}
	
	for(i = 0; i < 5; i++){
		if(vetor[i] <= menor){
			menor = vetor[i];
		}
	}
	
	printf("\n O menor vetor e %d", menor);
	printf("\n O maior vetor e %d", maior);
	
}