#include <stdio.h>

int main() {

    printf("Value of 'int': %zu\n", sizeof(int));
    printf("Value of 'short': %zu\n", sizeof(short));
    printf("Value of 'long': %zu\n", sizeof(long));
    printf("Value of 'float': %zu\n", sizeof(float));
    printf("Value of 'double': %zu\n", sizeof(double));
    printf("Value of 'long double': %zu", sizeof(long double));

    return 0;
}