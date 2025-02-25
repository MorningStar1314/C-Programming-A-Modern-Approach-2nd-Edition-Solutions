#include <stdio.h>

int main() {

    int number[5][5];

    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &number[i][j]);
        }
    }

    printf("\n");

    printf("Row totals: ");
    for (int i = 0; i < 5; i++) {
        int total = 0;
        for (int j = 0; j < 5; j++) {
            total += number[i][j];
        }
        printf("%d ", total);
    }

    printf("\n");

    printf("Column totals: ");
    for (int i = 0; i < 5; i++) {
        int total = 0;
        for (int j = 0; j < 5; j++) {
            total += number[j][i];
        }
        printf("%d ", total);
    }

    return 0;
}