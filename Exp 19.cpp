#include <stdio.h>

int main(void) {
    int n, i = 0, j = 1, k = 1;

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    printf("The Fibonacci series of %d terms is:\n", n);

    printf("%d ", i); // First term is 0 
    printf("%d ", j); // Second term is 1
    while (k <= n)
    {
        printf("%d ", i + j); // next term is sum of previous two terms
        k++;
        int temp = i;
        i = j;
        j = temp + j;
    }
    return 0;
}

