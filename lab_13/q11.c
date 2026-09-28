#include <stdio.h>

int main(void) {
    int a[100], n, i, value, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted elements in ascending order: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    position = n;
    while (position > 0 && a[position - 1] > value) {
        a[position] = a[position - 1];
        position--;
    }
    a[position] = value;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
