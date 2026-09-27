/* Q85 (Strings) - Reverse a string */
#include<stdio.h>
#include<string.h>
void reverseString(char s[]) {
    int len = 0;
    while (s[len] != '\0') len++;
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}