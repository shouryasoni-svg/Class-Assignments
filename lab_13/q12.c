#include <stdio.h>

int main(void) {
    int a[100], n, i, value, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &position);

    for (i = n; i >= position; i--) {
        a[i] = a[i - 1];
    }
    a[position - 1] = value;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
