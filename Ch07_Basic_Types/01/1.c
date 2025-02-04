#include <stdio.h>

int main() {

    short n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%hd", &n);

    for (short i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
    }

    return 0;
}