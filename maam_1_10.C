#include <stdio.h>

#define SIZE 3

void gaussianElimination(float a[SIZE][SIZE + 1], float x[SIZE]) {
    int i, j, k;
    float ratio;
    for (i = 0; i < SIZE - 1; i++) {
        for (j = i + 1; j < SIZE; j++) {
            ratio = a[j][i] / a[i][i];
            for (k = 0; k < SIZE + 1; k++) {
                a[j][k] -= ratio * a[i][k];
            }
        }
    }
    for (i = SIZE - 1; i >= 0; i--) {
        x[i] = a[i][SIZE];
        for (j = i + 1; j < SIZE; j++) {
            x[i] -= a[i][j] * x[j];
        }
        x[i] /= a[i][i];
    }
}

int main() {
    float a[SIZE][SIZE + 1] = {
        {1, 4, -1, -5}, 
        {1, 1, -6, -12}, 
        {3, -1, -1, 4} 
    };
    float x[SIZE]; 

    gaussianElimination(a, x);

    printf("The solution is:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("x%d = %f\n", i + 1, x[i]);
    }

    return 0;
}
