#include <stdio.h>
void printEachChar(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        printf("%c\n", s[i]);
    }
}









int main(void) {
    /* Q80 demo */
    int A[10][10] = {{1, 2}, {3, 4}};
    int B[10][10] = {{5, 6}, {7, 8}};
    int result[10][10];
    multiplyMatrices(A, B, result, 2, 2, 2);
    printf("Q80: ");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            printf("%d ", result[i][j]);
    printf("\n");

    char text[] = "Hello World 123!";

    /* Q81 demo */
    printf("Q81: %d\n", countCharacters(text));

    /* Q82 demo */
    printf("Q82:\n");
    printEachChar("Hi");

    /* Q83 demo */
    int vowels, consonants;
    countVowelsConsonants(text, &vowels, &consonants);
    printf("Q83: vowels=%d consonants=%d\n", vowels, consonants);

    /* Q84 demo */
    char upper[] = "hello world";
    toUppercase(upper);
    printf("Q84: %s\n", upper);

    /* Q85 demo */
    char rev[] = "hello";
    reverseString(rev);
    printf("Q85: %s\n", rev);

    /* Q86 demo */
    char pal[] = "level";
    printf("Q86: %s\n", isPalindrome(pal) ? "Palindrome" : "Not a palindrome");

    /* Q87 demo */
    int spaces, digits, special;
    countSpacesDigitsSpecial(text, &spaces, &digits, &special);
    printf("Q87: spaces=%d digits=%d special=%d\n", spaces, digits, special);

    return 0;
}