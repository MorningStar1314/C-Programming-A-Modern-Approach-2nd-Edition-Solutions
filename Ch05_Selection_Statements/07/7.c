#include <stdio.h>

int main() {

    int n1, n2, n3, n4, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2 && n1 > n3 && n1 > n4) {
        largest = n1;
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4) {
        largest = n2;
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4) {
        largest = n3;
    }
    else if (n4 > n1 && n4 > n2 && n4 > n3) {
        largest = n4;
    }

    if (n1 < n2 && n1 < n3 && n1 < n4) {
        smallest = n1;
    }
    else if (n2 < n1 && n2 < n3 && n2 < n4) {
        smallest = n2;
    }
    else if (n3 < n1 && n3 < n2 && n3 < n4) {
        smallest = n3;
    }
    else if (n4 < n1 && n4 < n2 && n4 < n3) {
        smallest = n4;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d", smallest);

    return 0;    
}