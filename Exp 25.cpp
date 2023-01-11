#include <stdio.h>

int main(void) {
    int n, temp, rem, sum = 0;

    printf("Enter a number to check if it's an Armstrong number: ");
    scanf("%d", &n);

    temp = n;
    while (temp) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    if (n == sum) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}

