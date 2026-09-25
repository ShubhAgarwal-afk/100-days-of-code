#include <string.h>
#include <stdio.h>

int countCharacters(char s[]) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        count++;
    }
    return count;
}
