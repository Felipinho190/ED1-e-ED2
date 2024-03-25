#include <stdio.h>

int SomaPositivos(int A[], int n){
    int soma = 0;
    
    for (int i = 0; i < n; i++){
        if (A[i] > 0){
            soma += A[i];
        }
    }
    return soma;
}

int main(){
    int A[] = {1, -2, 3, -4, 5, -6};
    int n = 6;
    int resultado = SomaPositivos(A, n);
    printf("Resultado: %d\n", resultado);
    return 0;
}
