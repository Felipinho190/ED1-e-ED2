#include <stdio.h>

int sequencia(int n) {
    // Caso base: primeiro termo da sequência é 2
    if (n == 1) {
        return 2;
    } else {
        // Relação de recorrência: S(n) = S(n-1) * 2
        return sequencia(n - 1) * 2;
    }
}

int main() {
    int posicao;

    printf("Digite a posição do elemento na sequência: ");
    scanf("%d", &posicao);

    // Chamada da função para calcular o valor do n-ésimo termo
    int valor = sequencia(posicao);
    printf("O valor do elemento na posição %d é: %d\n", posicao, valor);

    return 0;
}


