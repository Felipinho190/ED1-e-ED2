#include <stdio.h>

int sequencia(int n) {
    // Caso base: primeiro termo da sequ�ncia � 1
    if (n == 1) {
    	return 1;
	}
        else if (n == 2)
        	return 4;
     else {
        // Rela��o de recorr�ncia: S(n) = S(n-1) * 2
        return sequencia(n - 1) * 2;
    }
}

int main() {
    int posicao;

    printf("Digite a posicao do elemento na sequencia: ");
    scanf("%d", &posicao);

    // Chamada da fun��o para calcular o valor do n-�simo termo
    int valor = sequencia(posicao);
    printf("O valor do elemento na posicao %d e: %d\n", posicao, valor);

    return 0;
}

