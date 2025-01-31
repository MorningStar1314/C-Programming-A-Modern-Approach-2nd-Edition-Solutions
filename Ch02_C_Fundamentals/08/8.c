#include <stdio.h>

int main() {

    float loan, rate, payment, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    balance = loan + loan * rate / 100 / 12 - payment;
    printf("Balance remaining after first payment: %.2f\n", balance);

    balance = balance + balance * rate / 100 / 12 - payment;
    printf("Balance remaining after second payment: %.2f\n", balance);

    balance = balance + balance * rate / 100 / 12 - payment;
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}