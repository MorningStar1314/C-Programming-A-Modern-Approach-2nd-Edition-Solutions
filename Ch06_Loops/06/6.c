#include <stdio.h>

int main() {

    int n, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i * i <= n) {
        printf("%d\n", i * i);
        i += 2;
    }
    
    return 0;
}