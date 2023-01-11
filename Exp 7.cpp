#include <stdio.h>

int main() {
    int n, i = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        for (i; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %lld", n, fact);
    }

    return 0;
}

