* Q83 (Strings) - Count vowels and consonants in a string */
void countVowelsConsonants(char s[], int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
        if ((lower >= 'a' && lower <= 'z')) {
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
    }
}