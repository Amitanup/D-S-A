#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    // Given data points
    int x[] = {0, 10, 20, 30, 40};  // x-values (degrees)
    float y[] = {0, 0.17365, 0.34202, 0.50000, 0.64279};  // sin(x)

    int n = 5;  // Number of data points
    float diffTable[n][n];  // Backward difference table

    // Initialize the first column of the difference table with the given y-values
    for (int i = 0; i < n; i++) {
        diffTable[i][0] = y[i];
    }

    // Calculate the backward differences
    for (int j = 1; j < n; j++) {
        for (int i = n - 1; i >= j; i--) {
            diffTable[i][j] = diffTable[i][j - 1] - diffTable[i - 1][j - 1];
        }
    }

    // Display the backward difference table (optional)
    printf("Backward Difference Table:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%f\t", diffTable[i][j]);
        }
        printf("\n");
    }

    // The value at which we want to estimate sin(x)
    float value = 38.0;

    // Step size h (difference between x-values)
    float h = x[1] - x[0];

    // Compute s = (x - x_n) / h
    float s = (value - x[n - 1]) / h;

    // Initialize the result with the last y-value (y_n)
    float result = diffTable[n - 1][0];

    // Apply Newton's Backward Interpolation formula
    float term = 1.0;
    for (int j = 1; j < n; j++) {
        term *= (s + (j - 1));  // Compute s(s+1)(s+2)...
        result += (term * diffTable[n - 1][j]) / factorial(j);
    }

    // Display the estimated result
    printf("\nEstimated sin(%.2f) = %f\n", value, result);

    return 0;
}
write a c program to using trapezoidal rule
x=0
