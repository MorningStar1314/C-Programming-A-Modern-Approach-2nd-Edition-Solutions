#include <stdio.h>

int main() {

    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0){
        int digit_seen[10] = {0}, digit;
        
        while (n > 0) {
            digit = n % 10;
            digit_seen[digit] += 1;
            n /= 10;
        }

        printf("Repeated digit(s): ");
        for (int i = 0; i < 10; i++) {
            if (digit_seen[i] > 1) {
                printf("%d ", i);
            }
        }

        printf("\n\n");

        printf("Enter a number: ");
        scanf("%ld", &n);
    }
    return 0;
}