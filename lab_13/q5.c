#include <stdio.h>

int main(void) {
    int a[100], n, i, positive = 0, negative = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0) positive++;
        else if (a[i] < 0) negative++;
        else zero++;
    }

    printf("Positive = %d\nNegative = %d\nZero = %d\n", positive, negative, zero);
    return 0;
}
