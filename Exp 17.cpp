#include <stdio.h>

int main(void) {
    int n, i;

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    printf("The odd number series from 1 to %d is:\n", n);

    for(i = 1; i <= n; i+=2) {
        printf("%d ", i);
    }

    return 0;
}

