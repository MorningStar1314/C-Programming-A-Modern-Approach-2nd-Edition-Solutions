#include <stdio.h>

int main() {

    int i, temp;
    float e = 1.0f, epsilon;

    printf("Enter a small number: ");
    scanf("%f", &epsilon);

    for ( i = 1, temp = 1; (1.0f / (temp * i)) >= epsilon; i++) {
        e += 1.0f / (temp *= i);
    }

    printf("e is approximately %f", e);

    return 0;
}