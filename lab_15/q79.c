#include <stdio.h>

int main(void) {
    int a[10][10], rows, cols, i, j, r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) scanf("%d", &a[i][j]);
    }

    printf("Diagonal traversal: ");

    /* Start at each column of the top row; move down-right. */
    for (c = 0; c < cols; c++) {
        i = 0;
        j = c;
        while (i < rows && j < cols) {
            printf("%d ", a[i][j]);
            i++;
            j++;
        }
    }

    /* Then start at each remaining row of the first column. */
    for (r = 1; r < rows; r++) {
        i = r;
        j = 0;
        while (i < rows && j < cols) {
            printf("%d ", a[i][j]);
            i++;
            j++;
        }
    }

    printf("\n");
    return 0;
}
