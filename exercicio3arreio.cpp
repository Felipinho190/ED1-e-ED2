#include<stdio.h>
int main(){
	float vet[10],vet2[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("Digite os valores do vetor: ");
		scanf("%f",&vet[i]);	
	}
	for(i=0;i<10;i++){
		vet2[i]=vet[i]*vet[i];
	}
	for(i=0;i<10;i++){
		printf("%.0f ",vet[i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
		printf("%.0f ",vet2[i]);
	}
	
	
}