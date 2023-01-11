#include <stdio.h>

int main() {
    int num, reversed_num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed_num);
    return 0;
}

