/* Q85 (Strings) - Reverse a string */
#include<stdio.h>
int main()
{char s[100];
printf("Enter Your string:");
fgets(s,sizeof(s),stdin);
    int len = 0;
    while (s[len] != '\0') 
	{len++;
	}
    for (int i = 0; i < len / 2; i++) 
	{
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
	printf("Your reversed string is:%s",s);
return 0;
}