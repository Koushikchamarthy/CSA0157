#include <stdio.h>

int main() {
    int n, rem, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    printf("Sum of digits of %d is: %d", n, sum);

    return 0;
}

