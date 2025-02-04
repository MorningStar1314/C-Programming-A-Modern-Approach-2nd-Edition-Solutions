#include <stdio.h>

int main() {

    int n;
    char c;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d%c", &n, &c);

    for (int i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);

        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            while (getchar() != '\n') {
                ;;
            }
        }
    }

    return 0;
}