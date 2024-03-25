#include<stdio.h>
int main(){
	int vet[6],i;
	
	for(i=0;i<6;i++){
		printf("Digite os valores[%d]: ",i);
		scanf("%d",&vet[i]);
	}
	printf("\n");
	for(i=0;i<6;i++){
		printf("Valores digitados: %d\n",vet[i]);
	}
		
}