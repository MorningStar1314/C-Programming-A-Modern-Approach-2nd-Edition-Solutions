#include <stdio.h>

int main() {

    int number, mm, dd, yyyy;
    float price;

    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$  %4.2f\t%.2d/%.2d/%d", number, price, mm, dd, yyyy);

    return 0;
}