#include<stdio.h>
int main()
/*
{int a;
printf("Please enter the size of string:");
char arr[a+1];
*/
{char str[100];
printf("Enter a string:");
fgets(str,sizeof(str),stdin);
printf("%s\n",str);
return 0;
}