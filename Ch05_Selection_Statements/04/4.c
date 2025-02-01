#include <stdio.h>

int main() {

    int Speed;

    printf("Enter a wind speed: ");
    scanf("%d", &Speed);

    if (Speed < 1) {
        printf("Calm");
    }
    else if (Speed >= 1 && Speed <= 3) {
        printf("Light air");
    }
    else if (Speed >= 4 && Speed <= 27) {
        printf("Breeze");
    }
    else if (Speed >= 28 && Speed <= 47) {
        printf("Gale");
    }
    else if (Speed >= 48 && Speed <= 63) {
        printf("Storm");
    }
    else if (Speed > 63) {
        printf("Hurricane");
    }

    return 0;
}