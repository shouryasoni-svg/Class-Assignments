#include <stdio.h>

int main(void) {
    int a[100], n, i, largest, secondLargest, foundSecond = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    largest = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > largest) largest = a[i];
    }

    for (i = 0; i < n; i++) {
        if (a[i] < largest && (foundSecond == 0 || a[i] > secondLargest)) {
            secondLargest = a[i];
            foundSecond = 1;
        }
    }

    if (foundSecond == 1) printf("Second largest distinct element = %d\n", secondLargest);
    else printf("There is no second largest distinct element\n");
    return 0;
}
