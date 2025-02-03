#include <stdio.h>

int main() {

    int mm, dd, yy, earliest_mm, earliest_dd, earliest_yy;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);
    earliest_mm = mm;
    earliest_dd = dd;
    earliest_yy = yy;

    while (mm != 0 && dd != 0 && yy != 0) {
        if (yy < earliest_yy) {
            earliest_mm = mm;
            earliest_dd = dd;
            earliest_yy = yy;
        } else if (yy == earliest_yy) {
            if (mm < earliest_mm) {
                earliest_mm = mm;
                earliest_dd = dd;
                earliest_yy = yy;
            } else if (mm == earliest_mm) {
                if (dd < earliest_dd) {
                    earliest_mm = mm;
                    earliest_dd = dd;
                    earliest_yy = yy;
                }
            }
        }
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mm, &dd, &yy);
    }

    printf("%d/%d/%.2d is the earliest date", earliest_mm, earliest_dd, earliest_yy);

    return 0;
}