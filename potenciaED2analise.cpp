#include <stdio.h>

int Potencia(int a, int n) {
    int x = 1;
    while (n > 0) {
        x *= a; //2, 4, 8 
        n--;
    }
    return x;
}

int main() {
    int a, n;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    int resultado = Potencia(a, n);
    
    printf("%d elevado a %d = %d\n", a, n, resultado);
    return 0;
}

