#include <stdio.h>

int main() {

    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Result: %d", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
    
    return 0;
}