#include <stdio.h>

int main(void) {
    int n, rem, sum = 0;

    printf("Enter a number to find the sum of its digits: ");
    scanf("%d", &n);

    while (n) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    printf("Sum of the digits of %d: %d\n", n, sum);
    return 0;
}

