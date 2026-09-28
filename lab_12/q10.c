#include <stdio.h>

int main(void) {
    int row, col, spaces, stars;

    /* Upper half of the diamond. */
    for (row = 1; row <= 4; row++) {
        spaces = 4 - row;
        stars = 2 * row - 1;

        for (col = 1; col <= spaces; col++) {
            printf(" ");
        }
        for (col = 1; col <= stars; col++) {
            printf("*");
        }
        printf("\n");
    }

    /* Lower half of the diamond. */
    for (row = 3; row >= 1; row--) {
        spaces = 4 - row;
        stars = 2 * row - 1;

        for (col = 1; col <= spaces; col++) {
            printf(" ");
        }
        for (col = 1; col <= stars; col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
