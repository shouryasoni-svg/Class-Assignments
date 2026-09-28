#include <stdio.h>

int main(void) {
    int a[100], n, key, low, high, mid, found = 0, i;

    printf("Enter number of elements in sorted order: ");
    scanf("%d", &n);
    printf("Enter %d elements in ascending order: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            printf("Found at position %d\n", mid + 1);
            found = 1;
            break;
        } else if (key < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (found == 0) printf("Number not found\n");
    return 0;
}
