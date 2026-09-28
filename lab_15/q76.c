#include <stdio.h>

int main(void) {
    int a[10][10], n, i, j, symmetric = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) scanf("%d", &a[i][j]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) symmetric = 0;
        }
    }

    if (symmetric == 1) printf("The matrix is symmetric\n");
    else printf("The matrix is not symmetric\n");
    return 0;
}
