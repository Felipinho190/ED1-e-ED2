#include<stdio.h>
main(){
	int vet[6],i;
	
	for(i=0;i<6;i++){
		printf("Digite um valor par: ");
		scanf("%d",&vet[i]);
		
		while(vet[i]%2!=0){
			printf("Valor invalido! Digite um valor par:\n");
			scanf("%d",&vet[i]);
		}
	}
	for(i=5;i>=0;i--){
		printf(" %d ",vet[i]);
	}	
}