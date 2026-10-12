#include <stdio.h>
int main()
{ char str[100];
   printf("Enter your Strings:");
   fgets(str,sizeof(str),stdin);
   int i=0;
   int count =0;
   while(str[i]!='\0' && str[i]!='\n')
     {i++; 
      count++;
	 }
	 printf("Number of charactor in string:%d",count);
	 return 0;
}
      