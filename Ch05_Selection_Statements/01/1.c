#include <stdio.h>

int main() {

    int number, much;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0 && number <= 9) {
        much = 1;
    }
    else if (number >= 10 && number <= 99) {
        much = 2;
    }
    else if (number >= 100 && number <= 999) {
        much = 3;
    }
    else if (number >=1000 && number <= 9999) {
        much = 4;
    }

    printf("The number %d has %d digits", number, much);

    return 0;
}