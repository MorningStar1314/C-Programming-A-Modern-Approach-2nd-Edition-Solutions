#include <stdio.h>

int main() {

    int n, odd;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    
    odd = 3;
    for (int i = 1, square = 1; i <= n; odd += 2) {
        printf("%10d%10d\n", i, square);
        i++;
        square += odd;
    }

    return 0;
}