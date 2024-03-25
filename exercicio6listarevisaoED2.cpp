#include<stdio.h>
#include<stdlib.h>

void preencher_vetor(int *vetor, int tamanho, int valor) {
    int *ponteiro_final = vetor + tamanho;
    
    for (int *ponteiro = vetor; ponteiro < ponteiro_final; ponteiro++) {
        *ponteiro = valor;
    }
}

int main() {
    int vetor[5];
    
    preencher_vetor(vetor, 5, 10);
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
