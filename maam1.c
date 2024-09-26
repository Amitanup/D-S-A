#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double func(double x) {
    return pow(x, 3) - 4 * x - 9;
}
int main() {
    double a = -2, b = -3, c; 
    double e = 0.0001;      

    printf("The used function is x^3 - 4x - 9\n");
    printf("Initial values: a = %lf, b = %lf\n", a, b);
    if (func(a) * func(b) >= 0) {
        printf("Incorrect initial values for a and b. They should have opposite signs for a root to exist between them.\n");
        return 1;
    }

   
    while ((b - a) >= e) {
        c = (a + b) / 2; 

        if (func(c) == 0.0) {
            printf("Root = %lf\n", c);
            break;
        } else if (func(c) * func(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    printf("The root of the equation is: %lf\n", c);
    return 0;
}
// using bisection method find the negative root of the  quaction x^3-4*x+9=0
//