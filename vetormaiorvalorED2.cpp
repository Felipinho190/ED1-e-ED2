#include <stdio.h>

int MaiorElemento(int A[], int n){
   int valor = A[0];
   
   for(int i=1; i<n; i++){
      if(A[i] > valor){
         valor = A[i];
      }
   }
   return valor;
}

int main() {
    int n, A[10];

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int maior = MaiorElemento(A, n);
    printf("O maior elemento do vetor eh: %d\n", maior);

    return 0;
}

