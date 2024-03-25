#include<stdio.h>
main(){
	int vet[10],maior=-1000,maior2,i;
	
	printf("Vamos preencher o vetor!\n");
	
	for(i=0;i<10;i++){
		printf("Digite valor [%d]: ",i);
		scanf("%d",&vet[i]);
		if(maior<vet[i]){
			maior=vet[i];
			maior2=i;
		}	
	}
	for(i=0;i<10;i++){
		printf(" %d |",vet[i]);
	}
	printf("\n");

	printf("Maior elemento: %d\nPosicao do maior elemento: %d",maior,maior2);
}