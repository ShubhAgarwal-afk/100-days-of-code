/* Q87 (Strings) - Count spaces, digits, and special characters in a string */
#include<stdio.h>
void countSpacesDigitsSpecial(char s[], int *spaces, int *digits, int *special) {
    *spaces = 0;
    *digits = 0;
    *special = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch == ' ') {
            (*spaces)++;
        } else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        } else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
            (*special)++;
        }
    }
}
