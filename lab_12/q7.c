#include <stdio.h>

int main(void) {
    int row, col;

    for (row = 1; row <= 5; row++) {
        for (col = 1; col < row; col++) {
            printf(" ");
        }
        for (col = 1; col <= 6 - row; col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
