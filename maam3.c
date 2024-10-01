 #include <stdio.h>
#include <stdlib.h>
#include<math.h>

double function(double x) {
    return pow(x,3) - 4 * x - 9;
}

int main() {
    double x0, x1;
    double e = 0.0001;  // Tolerance for the root
    double r;

    x0 = 2;
    x1 = 3;

    printf("The function used is x^3 - 4x - 9\n");
    printf("x0 = %lf\n", x0);
    printf("x1 = %lf\n", x1);

    if (function(x0) * function(x1) > 0) {
        printf("No root found in the given interval\n");
        return 1;
    }

    while ((x1 - x0) > e) {
        r = (x0 * function(x1) - x1 * function(x0)) / (function(x1) - function(x0));
        
        if (function(r) == 0) {
            printf("Root is %lf\n", r);
            break;
        }

        // Check where the root lies and update the interval
        if (function(r) * function(x0) < 0) {
            x1 = r;
        } else {
            x0 = r;
        }
        
        printf("Current approximation of root is %lf\n", r);
    }

    printf("The approximate root of the equation is %lf\n", r);
    return 0;
}
