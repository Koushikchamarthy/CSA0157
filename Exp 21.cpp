#include <stdio.h>

int main(void) {
    int n, i = 2, sum = 0;

    printf("Enter the number till which you want to add even numbers: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i += 2;
    }
    printf("Sum of all even numbers from 2 to %d: %d", n, sum);
    return 0;
}

