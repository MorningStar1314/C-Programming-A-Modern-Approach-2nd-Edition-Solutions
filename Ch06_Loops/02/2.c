#include <stdio.h>

int main() {

    int n1, n2, r;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    while (n2 != 0) {
        r = n1 % n2;
        n1 = n2;
        n2 = r;
    }

    printf("Great common divisor: %d", n1);
    
    return 0;
}