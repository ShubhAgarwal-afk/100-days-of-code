#include<stdio.h>
#include<string.h>
int main()
{ printf("Enter your string:");
  char str[100];
  fgets(str,sizeof(str),stdin);
  int length=strlen(str);
  for(int i=0;i<length;i++)
     {
	   for(int j=0;j<length;j++)
	      {
		    if(atoi(str[i])>96 || atoi(str[i])<123)
			   {       atoi(str[i])==