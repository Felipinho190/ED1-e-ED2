#include<stdio.h>
main(){
	int vet[8],x,y,i;
	
	for(i=0;i<8;i++){
		printf("Digite o valor[%d]: ",i);
		scanf("%d",&vet[i]);
	}
	printf("Digite o valor da posicao do vetor:\n ");
	scanf("%d",&x);
	
	printf("Digite o valor da posicao do vetor:\n ");
	scanf("%d",&y);
	
	printf("Soma dos valores das posicoes do vetor:\n");
	printf("%d + %d = %d",vet[x],vet[y],vet[x]+vet[y]);
}