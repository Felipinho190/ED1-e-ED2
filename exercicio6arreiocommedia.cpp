#include<stdio.h>
void leiaVetor(int[], int);
void imprimeVetor(int[], int);
int main(){
    int vet[5], tam = 5,i,soma=0;
    float media=0;
    leiaVetor(vet, tam);
    imprimeVetor(vet, tam);
    //calcular a média dos valores digitados para um vetor de 5 posições. Quantos numeros eu tenho
    //abaixo e acima da média
    for(i=0;i<tam;i++){
    	printf("Digite um valor: ");
    	scanf("%d",&vet[i]);
    	soma=+vet[i];
	}
	media=soma/5;
	printf("Media: %f",media);
	
	for (i=0;i<tam;i++){
		if(vet[i]>media){
			printf("\nO numero %d esta acima da media",vet[i]);
		}
	}
	for(i=0;i<tam;i++){
		if(vet[i]<media){
			printf("\nO numero %d esta abaixo da media",vet[i]);
		}
	}
}
	


void leiaVetor(int v[], int t)
{
    int i;
    printf("\n\nDigite os valores do Vetor\n");
    for (i = 0; i < t; i++)
    {
        printf("vetor[%d]: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("\n\n");
}

void imprimeVetor(int v[], int t)
{
    int i;
    printf("\nDados do Vetor\n|");
    for (i = 0; i < t; i++){
        printf(" %d |", i + 1);
    }
    printf("\n|");
    for (i = 0; i < t; i++){
        printf(" %d |", v[i]);
    }
    printf("\n");
	}


