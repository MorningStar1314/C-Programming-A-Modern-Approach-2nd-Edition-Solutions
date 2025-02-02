#include <stdio.h>

int main() {

    int num, denom, n, new1, new2;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);
    new1 = num;
    new2 = denom;

    while (denom != 0) {
        n = num % denom;
        num = denom;
        denom = n;
    }

    printf("In lowest terms: %d/%d", new1 / num, new2 / num);
    
    return 0;
}