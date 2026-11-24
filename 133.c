#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    const char *names[] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
                            "JUL", "AUG", "SEP", "OCT", "NOV", "DEC" };
    char input[20];
    printf("Enter month: ");
    scanf("%19s", input);

    int found = -1;
    for (int m = JAN; m <= DEC; m++) {
        if (strcmp(input, names[m]) == 0) {
            found = m;
            break;
        }
    }

    if (found == -1) {
        printf("Invalid month");
        return 1;
    }

    switch ((enum Month)found) {
        case FEB:
            printf("28 or 29 days");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days");
            break;
        default:
            printf("31 days");
            break;
    }
    return 0;
}