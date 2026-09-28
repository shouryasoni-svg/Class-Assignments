#include <stdio.h>

int main(void) {
    int row, col, stars;

    /* Upper half: 1, 3, 5, 7, 9 stars. */
    for (row = 1; row <= 5; row++) {
        stars = 2 * row - 1;
        for (col = 1; col <= stars; col++) {
            printf("*");
        }
        printf("\n");
    }

    /* Lower half: 7, 5, 3, 1 stars. */
    for (row = 4; row >= 1; row--) {
        stars = 2 * row - 1;
        for (col = 1; col <= stars; col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
