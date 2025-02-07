#include <stdio.h>
#include <ctype.h>

int main() {

    int hour, minute, total_minutes, de1 = 480, de2 = 583, de3 = 679, de4 = 767, de5 = 840, de6 = 945, de7 = 1140, de8 = 1305;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &ch);

    if (toupper(ch) == 'P') {
        hour += 12;
    }

    total_minutes = hour * 60 + minute;

    printf("Closest departure time is ");

    if (total_minutes < de1 + (de2 -de1) / 2) {
        printf("8:00 a.m., arriving at 10:16 a.m.");
    }
    else if (total_minutes < de2 + (de3 - de2) / 2) {
        printf("9:43 a.m., arriving at 11:52 a.m.");
    }
    else if (total_minutes < de3 + (de4 - de3) / 2) {
        printf("11:19 a.m., arriving at 1:31 p.m.");
    }
    else if (total_minutes < de4 + (de5 - de4) / 2) {
        printf("12:47 p.m., arriving at 3:00 p.m.");
    }
    else if (total_minutes < de5 + (de6 - de5) / 2) {
        printf("2:00 p.m., arriving at 4:08 p.m.");
    }
    else if (total_minutes < de6 + (de7 - de6) / 2) {
        printf("3:45 p.m., arriving at 5:55 p.m.");
    }
    else if (total_minutes < de7 + (de8 - de7) / 2) {
        printf("7:00 p.m., arriving at 9:20 p.m.");
    }
    else {
        printf("9:45 p.m., arriving at 11:58 p.m.");
    }

    return 0;
}