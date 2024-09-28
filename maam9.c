#include <stdio.h>
#include <math.h>

double f(double x) {
    return pow(x, 2.2) - 69;  // f(x) = x^2.2 - 69
}

int main() {
    double a = 5.0, b = 8.0, tol = 0.0007;  // Tolerance of 0.07% = 0.0007
    double x_n, f_a, f_b, f_xn;

    do {
        f_a = f(a);
        f_b = f(b);
        
        // Calculate the new approximation using the Regula Falsi method
        x_n = b - (f_b * (b - a)) / (f_b - f_a);
        f_xn = f(x_n);

        // Check if the result is within the tolerance
        if (fabs(f_xn) < tol) break;

        // Update the interval [a, b]
        if (f_a * f_xn < 0) {
            b = x_n;
        } else {
            a = x_n;
        }

    } while (fabs(f_xn) > tol);  // Continue until the root is within the tolerance

    printf("The root is approximately: %.5f\n", x_n);
    return 0;
}
