#include <stdio.h>

int main() {
    int n = 1, sum = 0;

    while (n <= 100) {
        if (n % 2 != 0) {
            sum += n;
        }
        n++;
    }

    printf("Sum of odd numbers from 1 to 100 is: %d", sum);
    return 0;
}

