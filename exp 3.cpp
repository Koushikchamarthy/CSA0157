#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("%d\n", a);
    } else {
        printf("%d %d ", a, b);
        for (i = 2; i < n; i++) {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

    return 0;
}

