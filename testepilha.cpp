#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct cel {
    char conteudo;
    struct cel *prox;
} celula;

void empilha(char c, celula *topo) {
    celula *nova = malloc(sizeof(celula));
    nova->conteudo = c;
    nova->prox = topo->prox;
    topo->prox = nova;
}

char desempilha(celula *topo) {
    celula *pt = topo->prox;
    char c = pt->conteudo;
    topo->prox = pt->prox;
    free(pt);
    return c;
}

int main() {
    char frase[50];
    celula cabeca;
    celula *topo = &cabeca;
    topo->prox = NULL;
    printf("Informe a frase: ");
    fgets(frase, 50, stdin);
    int i;
    for (i=0; frase[i] != '\0'; i++) {
        empilha(frase[i], topo);
    }
    printf("\nInvertida: ");
    while (topo->prox != NULL) {
        putchar(desempilha(topo));
    }
    putchar('\n');
    return 0;
}
