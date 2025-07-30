#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Oops! That's not a 3-digit number.\n");
    } else {
        int digit1 = num % 10;
        int digit2 = (num / 10) % 10;
        int digit3 = num / 100;

        reversed = digit1 * 100 + digit2 * 10 + digit3;

        printf("Reversed number: %d\n", reversed);
    }

    return 0;
}
