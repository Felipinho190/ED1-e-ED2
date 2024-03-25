#include<stdio.h>
main(){	
	int notas[15], i, soma = 0;
	float media = 0;
	
	for(i = 0; i < 15; i++){
		printf("Digite a nota do aluno: ");
		scanf("%d", &notas[i]);
		soma = soma + notas[i];
	}	
	media = soma / 15;
	
	printf("\nA media geral da turma foi: %2.f", media);
		
}