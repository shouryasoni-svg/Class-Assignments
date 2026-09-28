#include <stdio.h>

int main(void) {
    int a[200], n1, n2, i;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter first array elements: ");
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter second array elements: ");
    for (i = 0; i < n2; i++) scanf("%d", &a[n1 + i]);

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
