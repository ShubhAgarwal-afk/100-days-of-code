#include<stdio.h>
int main()
{char s[100];
 printf("Enter your strings:");
 fgets(s,sizeof(s),stdin);
    int len = 0;
while (s[len] != '\0' && s[len] != '\n') 
	{len++;
    } 
	
	int j =0;
    for (int i = 0; i < len / 2; i++) 
	{
        if (s[i] != s[len - 1 - i]) 
			{    printf("Your string is not a palindrome");
                 j++;			
			      break;
            }
			
		
	}
	if(j==0)
	{printf("Your string is palindrome");
	}
	
return 0;
}