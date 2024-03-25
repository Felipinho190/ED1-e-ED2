#include <stdio.h>

int sequencia(int n) {
    // Caso base: primeiro termo da sequ�ncia � 2
    if (n == 1) {
        return 2;
    } else {
        // Rela��o de recorr�ncia: S(n) = S(n-1) * 2
        return sequencia(n - 1) * 2;
    }
}

int main() {
    int posicao;

    printf("Digite a posi��o do elemento na sequ�ncia: ");
    scanf("%d", &posicao);

    // Chamada da fun��o para calcular o valor do n-�simo termo
    int valor = sequencia(posicao);
    printf("O valor do elemento na posi��o %d �: %d\n", posicao, valor);

    return 0;
}


