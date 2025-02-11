#include <stdio.h>

int main() {

    int digit_seen[10] = {0}, digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
    }

    printf("Digit:      ");
    for (int i = 0; i < 10; i++) {
        printf("%3d ", i);
    }

    printf("\nOccurrences:");
    for (int i = 0; i < 10; i++) {
        printf("%3d ", digit_seen[i]);
    }

    return 0;
}