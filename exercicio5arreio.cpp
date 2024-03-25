#include<stdio.h>
void leiaVetor(int[], int);
void imprimeVetor(int[], int);

int main()
{
    int vet[10], tam = 10, aux = 0, i,soma;
    leiaVetor(vet, tam);
    imprimeVetor(vet, tam);
    printf("\nQuantidade de numeros pares\n");
    for (i = 0; i < tam; i++){
        if (vet[i] % 2 == 0)
		{
			somatorio+=vet[i];//somatorio=somatorio+vet[i];
            aux++;
        }
    }
    printf("\nQuantidade de numeros pares sao: %d\n", aux);
    printf("\nSomatorio dos numeros pares:%d\n",somatorio);
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
