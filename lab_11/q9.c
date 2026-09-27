#include <stdio.h>

int main() {
    int n, temp, first, last, power = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while(temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    n = n - first * power;
    n = n - last;
    n = n + last * power;
    n = n + first;

    printf("After swapping = %d", n);

    return 0;
}