#include <stdio.h>

int main() {

    int prefix, three, four;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &prefix, &three, &four);

    printf("You entered %03d.%03d.%04d", prefix, three, four);

    return 0;
}