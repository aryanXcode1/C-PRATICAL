#include <stdio.h>

int main() {
    // ARYAN RAJ
    // 10297

    int pin, attempts = 0;
    const int correctPin = 1234;

    while (attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin) {
            printf("Access Granted!\n");
            return 0;
        } else {
            printf("Incorrect PIN.\n");
            attempts++;
        }
    }

    printf("Card Blocked! Too many wrong attempts.\n");
    return 0;
}
