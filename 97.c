#include<stdio.h>
#include<string.h>
int main()
{ printf("Enter your string:");
  char str[100];
  fgets(str,sizeof(str),stdin);
  int n =strlen(str);
  int i =0;
while(i<n)
     {
		 while(i<n && str[i]==' ')
		 {  i++;
		 }
		 int start = i;
		 printf("%c",str[start]);
		 printf(".");
		 while(i<n && str[i]!=' ')
		    {i++;
			}
	 }
	 return 0;
}
		 