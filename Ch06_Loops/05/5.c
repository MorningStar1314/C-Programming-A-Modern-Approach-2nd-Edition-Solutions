#include <stdio.h>

int main() {

    int number, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    do  {
        digit = number % 10;
        printf("%d", digit);
        number /= 10;
    }   while (number != 0);

    return 0;
}