#include <stdio.h>

int main() {

    int prefix, identifier, code, number, digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &code, &number, &digit);

    printf("GS1 prefix: %.3d\n", prefix);
    printf("Group identifier: %d\n", identifier);
    printf("Publisher code: %.3d\n", code);
    printf("Item number: %.5d\n", number);
    printf("Check digit: %d\n", digit);

    return 0;
}