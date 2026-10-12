#include<stdio.h>
int main()
{  char s[100];
   printf("Enter your string:");
   fgets(s,sizeof(s),stdin);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }
	printf("Your new string is:%s",s);
	return 0;
}