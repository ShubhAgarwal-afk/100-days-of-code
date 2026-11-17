#include <stdio.h>
#include <string.h>

int main() {
    char s[100001], t[100001];
    printf("Enter the two strings:");
    scanf("%s %s", s, t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    int cnt[26] = {0};
    for (int i = 0; s[i]; i++) {
        cnt[s[i] - 'a']++;   // count letters of s up
        cnt[t[i] - 'a']--;   // count letters of t down
    }

    for (int i = 0; i < 26; i++) {
        if (cnt[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}