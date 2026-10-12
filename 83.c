#include<stdio.h>
int main()
{ char s[100];
  printf("Enter your string:");
  fgets(s,sizeof(s),stdin);
  int vowels =0;
  int consonants=0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
        if ((lower >= 'a' && lower <= 'z')) {
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
printf("Your number of vowels:%d\n",vowels);
printf("Your number of consonents:%d\n",consonants);
return 0;
}
