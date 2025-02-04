#include <stdio.h>

int main() {

    int n, temp = 1;
    float result = 1.0f;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result += 1.0f / (temp *= i);
    }

    printf("e is approximately %f\n", result);

    return 0;
}