#include<stdio.h>

void preencher_matriz(int *matriz, int linhas, int colunas) {
    int *ponteiro_final = matriz + (linhas * colunas);
    
    for (int *ponteiro = matriz; ponteiro < ponteiro_final; ponteiro++) {
        *ponteiro = 0;
    }
}

int main() {
    int matriz[3][3];
    
    preencher_matriz(&matriz[0][0], 3, 3);
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
