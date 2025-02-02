#include <stdio.h>

int main() {

    float number, Max = 0;

    printf("Enter a number: ");
    scanf("%f", &number);
    Max = number;
    
    while (number > 0) {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number > Max) {
            Max = number;
        }
    }

    printf("The largest number entered was: %.4f", Max);

    return 0;
}