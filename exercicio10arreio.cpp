#include<stdio.h>
main(){
	float vet[15],media,somatorio=0;
	int i;
	
	for(i=0;i<15;i++){
		printf("Digite a nota: ");
		scanf("%f",&vet[i]);
		somatorio+=vet[i];
	}
	media=somatorio/15;
	
	printf("Media geral da turma: %.1f",media);
}