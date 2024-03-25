#include<stdio.h>
void leiaVetor(int[], int);
void imprimeVetor(int[], int);

int main(){
    int vet[8], tam = 8, x, y, soma;
    leiaVetor(vet, tam);
    imprimeVetor(vet, tam);
    printf("\nDigite a posicao 1: ");
    scanf("%d", &x);
    printf("Digite a posicao 2: ");
    scanf("%d", &y);
    imprimeVetor(vet, tam);
    printf("\nSoma dos valores das posicoes selecionadas no vetor");
    printf("\n%d + %d = %d\n", vet[x + 1], vet[y + 1], vet[x + 1] + vet[y + 1]);
}

void leiaVetor(int v[], int t){
    int i;
    printf("\n\nDigite os valores do Vetor\n");
    for (i=0;i<t;i++){
        printf("vetor[%d]: ",i+1);
        scanf("%d", &v[i]);
    }
    printf("\n\n");
} 

void imprimeVetor(int v[], int t){
    int i;
    printf("\nDados do Vetor\n|");
    for (i=0;i<t;i++){
        printf(" %d |", i + 1);
    }
    printf("\n|");
    for (i=0;i<t;i++){
        printf(" %d |", v[i]);
    }
    printf("\n");
}