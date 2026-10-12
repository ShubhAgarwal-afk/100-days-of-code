#include<stdio.h>
int main()
{ char str[100];
  printf("Enter the string:");
  fgets(str,sizeof(str),stdin);
  for(int i=0;str[i]!='\0' && str[i]!='\n';i++)
     {
		 putchar(str[i]);
		 printf("\n");
     }
	 return 0;
}