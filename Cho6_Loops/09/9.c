#include <stdio.h>

int main() {

    float loan, rate, payment;
    int num_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("Enter number of payments: ");
    scanf("%d", &num_payments);

    for (int i = 1; i <= num_payments; i++) {
        loan = loan + loan * rate / 100 / 12 - payment;
        printf("Balance remaining after payment %d: %.2f\n", i, loan);
    }

    return 0;
}