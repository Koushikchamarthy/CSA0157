#include <stdio.h>

int main(void) {
    int n, i = 1, factorial = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d: %d", n, factorial);
    return 0;
}

