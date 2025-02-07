#include <stdio.h>

int main() {

    int n;
    short factorial = 1;  // Change the type from (b) to (g)

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d: %d", n, factorial);


    return 0;
}