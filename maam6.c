#include <stdio.h>
#include <math.h>

double f(double x) {
    return x - exp(-x);
}

int main() {
    double a = 0.0, b = 1.0, tol = 0.0005; // 0.05% tolerance = 0.0005
    double m, f_a, f_m;
    
    // Check if the initial interval is valid
    if (f(a) * f(b) >= 0) {
        printf("Invalid initial interval.\n");
        return -1;
    }
    
    do {
        m = (a + b) / 2.0; // Midpoint
        f_a = f(a);
        f_m = f(m);
        
        if (f_a * f_m < 0) {
            b = m;
        } else {
            a = m;
        }
        
    } while (fabs(b - a) > tol); // Repeat until the interval width is smaller than tolerance

    printf("The root is approximately: %.5f\n", m);

    return 0;
}
