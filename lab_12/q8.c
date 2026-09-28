#include <stdio.h>

int main(void) {
    int row, col;

    for (row = 1; row <= 5; row++) {
        for (col = 1; col <= 5 - row; col++) {
            printf(" ");
        }
        for (col = 6 - row; col <= 5; col++) {
            printf("%d", col);
        }
        printf("\n");
    }

    return 0;
}
