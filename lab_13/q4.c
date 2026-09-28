#include <stdio.h>

int main(void) {
    int a[100], n, i, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) even++;
        else odd++;
    }

    printf("Even numbers = %d\nOdd numbers = %d\n", even, odd);
    return 0;
}
