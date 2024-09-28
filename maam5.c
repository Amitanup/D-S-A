#include <stdio.h>
#include <math.h>

int main() {
    // Define the approximate values
    float val1 = 0.30, val2 = 0.33, val3 = 0.34;
    
    // Define the actual value of 1/3
    float actual = 1.0 / 3.0;
    
    // Calculate the differences between the actual value and the approximations
    float diff1 = fabs(actual - val1);
    float diff2 = fabs(actual - val2);
    float diff3 = fabs(actual - val3);
    
    // Find the closest approximation
    if (diff1 < diff2 && diff1 < diff3) {
        printf("0.30 is the best approximation.\n");
    } else if (diff2 < diff1 && diff2 < diff3) {
        printf("0.33 is the best approximation.\n");
    } else {
        printf("0.34 is the best approximation.\n");
    }

    return 0;
}
