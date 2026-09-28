#include <stdio.h>

int main(void) {
    int a[100], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) printf("Number not found\n");
    return 0;
}
