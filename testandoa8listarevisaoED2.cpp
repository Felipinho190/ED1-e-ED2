#include <stdio.h>

void fill_matrix(int *matrix, int size) {
    for (int i = 0; i < size; i++) {
        *(matrix + i) = 0;
    }
}

int main() {
    int matrix[5][5];
    fill_matrix(&matrix[0][0], 25);
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
