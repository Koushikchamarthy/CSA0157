#include <stdio.h>
#include <math.h>

int main() {
    int n, original_n, digits = 0, temp = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original_n = n;

    while (original_n != 0) {
        original_n /= 10;
        ++digits;
    }

    original_n = n;

    while (original_n != 0) {
        int rem = original_n % 10;
        temp += pow(rem, digits);
        original_n /= 10;
    }

    if (temp == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}

