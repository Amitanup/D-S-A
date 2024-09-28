#include <stdio.h>
#include <math.h>

double f(double x) { return x * x - 5; }
double f_prime(double x) { return 2 * x; }

int main() {
    double x = 2.0, tol = 0.00001, x_new;

    do {
        x_new = x - f(x) / f_prime(x);
        if (fabs(x_new - x) < tol) break;
        x = x_new;
    } while (1);

    printf("The value of √5 is approximately: %.5f\n", x_new);
    return 0;
}
