#include <stdio.h>

int main() {

    int num1, denom1, num2, denom2, result_num, result_denom, temp, num_temp, denom_temp;
    char sign;

    printf("Enter two fractions separated by a sign: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &sign, &num2, &denom2);

    if (sign == '+') {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (sign == '-') {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (sign == '*') {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
    }
    else if (sign == '/') {
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
    }

    num_temp = result_num;
    denom_temp = result_denom;

    while (denom_temp != 0) {
        temp = num_temp % denom_temp;
        num_temp = denom_temp;
        denom_temp = temp;
    }

    if (result_denom / num_temp == 1) {
        printf("The result is %d", result_num / num_temp);
    }
    else {
        printf("The result is %d/%d", result_num / num_temp, result_denom / num_temp);
    }
    
    
    return 0;
}