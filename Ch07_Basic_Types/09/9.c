#include <stdio.h>
#include <ctype.h>

int main() {

    int hour, minute;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &ch);

    printf("Equivalent 24-hour time: ");
    if (toupper(ch) == 'A') {
        if (hour == 12) {
            printf("00:%.2d", minute);
        }
        else {
            printf("%d:%.2d", hour, minute);
        }
    }
    else if (toupper(ch) == 'P') {
        if (hour == 12) {
            printf("%d:%.2d", hour, minute);
        }
        else {
            printf("%d:%.2d", hour + 12, minute);
        }
    }

    return 0;
}