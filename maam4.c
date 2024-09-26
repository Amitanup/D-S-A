#include <stdio.h>

int main() {
    int i, j, k;
    float a[3][4] = {
        {1, 4, -1, -5},
        {1, 1, -6, -12},
        {3, -1, -1, 4}
    };
    float x[3], ratio;

    // Forward elimination
    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            ratio = a[j][i] / a[i][i];
            for (k = 0; k < 4; k++) {
                a[j][k] = a[j][k] - ratio * a[i][k];
            }
        }
    }

    // Back substitution
    x[2] = a[2][3] / a[2][2];
    x[1] = (a[1][3] - a[1][2] * x[2]) / a[1][1];
    x[0] = (a[0][3] - a[0][2] * x[2] - a[0][1] * x[1]) / a[0][0];

    // Print the result
    printf("The solution is:\n");
    for (i = 0; i < 3; i++) {
        printf("x%d = %f\n", i + 1, x[i]);
    }

    return 0;
}
