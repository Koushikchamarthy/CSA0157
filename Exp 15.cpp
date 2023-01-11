#include <stdio.h>

int main(void) {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 3) {
        printf("Ticket charge: Free\n");
    } else if (age < 12) {
        printf("Ticket charge: $10\n");
    } else {
        printf("Ticket charge: $15\n");
    }
    return 0;
}

