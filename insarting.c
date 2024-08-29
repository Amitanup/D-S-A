#include <stdio.h>

int main() {
    int a[10], i, n, pos, value;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the %d elements:\n", n);
    for (i = 0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nBefore inserting the element:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n\nEnter the position to insert the number: ");
    scanf("%d", &pos);

    printf("\nEnter the value to insert: ");
    scanf("%d", &value);
    if (pos > n + 1 || pos < 1) {
        printf("\nInvalid position!\n");
        return -1;
    }
    for (i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = value;

    printf("\nAfter inserting the value:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
