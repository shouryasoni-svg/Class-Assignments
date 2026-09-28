#include <stdio.h>

int main(void) {
    int a[10][10], n, i, j, distinct = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) scanf("%d", &a[i][j]);
    }

    /* Compare each main-diagonal element with the later ones. */
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) distinct = 0;
        }
    }

    if (distinct == 1) printf("Main diagonal elements are distinct\n");
    else printf("Main diagonal elements are not distinct\n");
    return 0;
}
