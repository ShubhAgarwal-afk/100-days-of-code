/* Q87 (Strings) - Count spaces, digits, and special characters in a string */
#include<stdio.h>
int main()
{char s[100];
printf("Enter your characters:");
fgets(s,sizeof(s),stdin);
int spaces = 0;
int digits = 0;
int special = 0;
    for (int i = 0; s[i] != '\0'; i++)
		{
			char ch = s[i];
         if (ch == ' ') 
	       {   spaces++;
           } 
		else 
		   {if (ch >= '0' && ch <= '9') 
	           {    digits++;
               } 
		    else 
		       {if (((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) && ch!='\n') 
	               {
	                       special++;
                    }
        
               }
		   }
		
	    
	printf("Number of spaces:%d\n",spaces);
	printf("Number of digits:%d\n",digits);
	printf("Number of specials:%d\n",special);
	return 0;
}
}