#include <stdio.h>

int main() {

    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, first_sum, second_sum, total;

    printf("Enter the complete UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    first_sum = n1 + n3 + n5 + n7 + n9 + n11;
    second_sum = n2 + n4 + n6 + n8 + n10;
    total = 3 * first_sum + second_sum;

    if (n12 == 9 - ((total - 1) % 10)) {
        printf("VALID");
    }
    else {
        printf("NOT VALID");
    }

    return 0;
}