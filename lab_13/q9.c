#include <stdio.h>

int main(void) {
    int number, digit, i, highest = 0, mostCommon = 0;
    int count[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) number = -number;
    if (number == 0) count[0] = 1;

    while (number > 0) {
        digit = number % 10;
        count[digit]++;
        number /= 10;
    }

    for (i = 0; i <= 9; i++) {
        if (count[i] > highest) {
            highest = count[i];
            mostCommon = i;
        }
    }

    printf("Most frequent digit = %d\nOccurrences = %d\n", mostCommon, highest);
    return 0;
}
