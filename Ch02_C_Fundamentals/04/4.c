#include <stdio.h>

int main() {
    float amount, tax;
    
    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f", amount * 1.05f);
    
    return 0;
}