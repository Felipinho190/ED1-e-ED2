#include<stdio.h>
main(){
	int vet[6],i;
	
	for(i=0;i<6;i++){
		printf("Digite valor: ");
		scanf("%d",&vet[i]);
	}
	for(i=5;i>=0;i--){
		printf(" %d ",vet[i]);	
	}
	
}