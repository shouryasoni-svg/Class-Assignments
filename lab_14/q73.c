#include <stdio.h>

int main(void) {
    int a[10][10], rowSum[10], rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    for (i = 0; i < rows; i++) {
        printf("Sum of row %d = %d\n", i + 1, rowSum[i]);
    }
    return 0;
}
