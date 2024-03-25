#include<stdio.h>
main(){
	int vet[10],i,cont=0;
	
	for(i=0;i<10;i++){
		printf("Digite o valor [%d]:",i);
		scanf("%d",&vet[i]);
		
		if(vet[i]%2==0)
		cont++;
	}
	printf("Quantidade de numeros pares: %d ",cont);
}