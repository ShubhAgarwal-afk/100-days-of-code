#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];
    printf("Enter the string:");
    scanf("%s", s);

    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;   // -1 = never seen

    int left = 0, best = 0;
    for (int i = 0; s[i]; i++) {
        unsigned char c = s[i];
        if (last[c] >= left)          // repeat inside the current window
            left = last[c] + 1;       // shrink the window past it
        last[c] = i;                  // record latest position
        if (i - left + 1 > best)
            best = i - left + 1;      // update the longest window
    }
    printf("%d", best);
    return 0;
}