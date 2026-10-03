#include<stdio.h>
#include<string.h>
int main()
{ 
  char str[100];
  printf("enter your string");
  fgets(str,sizeof(str),stdin);
  int length=strlen(str);
 for(int i=0;i<length;i++)
    { if(atoi(str[i])>64 || atoi(str[i])>91)
	    { atoi str[i]=atoi str[i]+32;
		        }
		else
	    { atoi str[i]=atoi str[i] -32;
		        }
				}
				printf("Your toggles array is:%s",str);
				
				return 0;
				}