#include <stdio.h>
#include <stdlib.h>

void ler_vetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
    	
        printf("Digite o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));
    ler_vetor(vetor, n);

    printf("Vetor preenchido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}
