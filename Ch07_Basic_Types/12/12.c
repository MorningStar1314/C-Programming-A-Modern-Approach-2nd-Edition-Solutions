#include <stdio.h>

int main() {

    float num = 0.0f, total = 0.0f;
    char sign;

    printf("Enter an expression: ");
    scanf("%f", &total);

    while ((sign = getchar()) != '\n') {
        printf("%.2f\n", total);
        switch (sign) {
            case '+':
                scanf("%f", &num);
                total += num;
                break;
            case '-':
                scanf("%f", &num);
                total -= num;
                break;
            case '*':
                scanf("%f", &num);
                total *= num;
                break;
            case '/':
                scanf("%f", &num);
                total /= num;
                break;
            default:
                break;
        }
    }

    printf("Value of expression: %.2f", total);

    return 0;
}