/*#include<stdio.h>
#include<string.h>
int main()
{ 
  char str[100];
  printf("enter your string");
  fgets(str,sizeof(str),stdin);
  int length=strlen(str);
 for(int i=0;i<length;i++)
    { if((str[i])>='A' || (str[i])>='Z')
	    {  str[i]= str[i]+'32';
		        }
		else
	    { str[i]=str[i]-'32';
		        }
				}
				printf("Your toggles array is:%s",str);
				
				return 0;
				}*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("enter your string: ");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;      
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;      
    }

    printf("Your toggled string is: %s", str);
    return 0;
}