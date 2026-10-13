#include<stdio.h>
int main()
{  char str[100];
   printf("Enter your strings:");
   fgets(str,sizeof(str),stdin);
   for(int i=0;str[i] !='\n';i++)
      {   if(str[i]==' ')
	        {str[i]='-';
			}
			}
			int i=0;
	while(str[i] != '\0')
	{putchar(str[i]);
i++;
	}
			return 0;
			}
	       