#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	int vetor[10], i, cont = 0, pos = 0;
	
	srand(time(NULL));
	
	for(i = 0; i < 10; i++){
	vetor[i] = (rand() % 32000) - 16000; 
	}
	
	for(i = 0; i < 10; i++){
		printf("\n%d\n", vetor[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(vetor[i] < 0){
			cont++;
		}
		if(vetor[i] > 0){
			pos = pos + vetor[i];
		}
	}
	
	printf("\nA soma dos numeros positivos e: %d",pos);
	printf("\nA quantidade de numeros negativos e: %d",cont);
}