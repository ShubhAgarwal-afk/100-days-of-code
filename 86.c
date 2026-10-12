#include<stdio.h>
int main()
{char s[]
    int len = 0;
    while (s[len] != '\0') 
	{len++;
    }
    for (int i = 0; i < len / 2; i++) 
	{
        if (s[i] != s[len - 1 - i]) 
			{    printf("Your string is not a palindrome:");
			break;
            }
	}
	
return 0;
}