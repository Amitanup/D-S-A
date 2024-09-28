#include <stdio.h>
#include <math.h>

// Define the function f(x) = 3x - cos(x) - 1
double f(double x) {
    return 3 * x - cos(x) - 1;
}

// Define the derivative of the function f'(x) = 3 + sin(x)
double f_prime(double x) {
    return 3 + sin(x);
}

int main() {
    double x0 = 0.5;  // Initial guess
    double tol = 0.0001;  // Tolerance for four decimal places
    double x1, fx, fx_prime;
    
    do {
        fx = f(x0);
        fx_prime = f_prime(x0);
        
        // Newton-Raphson iteration
        x1 = x0 - fx / fx_prime;

        // Check if the difference is within the tolerance
        if (fabs(x1 - x0) < tol) {
            break;
        }
        
        // Update x0 for the next iteration
        x0 = x1;
        
    } while (1);
    
    printf("The real root is approximately: %.4f\n", x1);

    return 0;
}
