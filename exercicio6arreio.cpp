#include<stdio.h>
main(){
	int vet[10],i,menor=1000,maior=-1000;
	
	for(i=0;i<10;i++){
		printf("Digite o valor [%d]:",i);
		scanf("%d",&vet[i]);
		
		if(maior<vet[i])
			maior=vet[i];
			
		if(menor>vet[i])
			menor=vet[i];
	}
	printf("\n");
	printf("Maior valor do vetor: %d\n",maior);
	printf("Menor valor do vetor: %d\n",menor);
}