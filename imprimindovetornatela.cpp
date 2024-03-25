#include<stdio.h>
void imprimeVet(int [], int );
void leiaVet(int [],int);
int main(){
	int vet1[6],vet2[6],tamanho = 6;
	
	leiaVet(vet1,tamanho);
	printf("\n");
	leiaVet(vet2,tamanho);
	
	imprimeVet(vet1,tamanho);
	printf("\n");
	imprimeVet(vet2,tamanho);
	
	return 0;
}
void leiaVet(int vet[],int tam){
	int i;
	printf("\nVamos preencher o nosso vetor\n");
	 for(i=0;i<tam;i++){
	 	printf("vet[%d]: ",i);
	 	scanf("%d",&vet[i]);
	 }
}
void imprimeVet(int vet[],int tam){
	int i;
	printf("\n|");
	for (i=0;i<tam;i++){
		printf("  %d",vet[i]);
	}
	printf("|\n");
	
}