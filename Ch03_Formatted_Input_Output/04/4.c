#include <stdio.h>

int main() {

    int prefix, three, four;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &prefix, &three, &four);

    printf("You entered %.3d.%.3d.%.4d", prefix, three, four);

    return 0;
}