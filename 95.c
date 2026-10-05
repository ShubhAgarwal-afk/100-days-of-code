#include<stdio.h>
#include<string.h>
int main()
{char str1[100];
 printf("Enter your first string:");
 fgets(str1,sizeof(str1),stdin);
 char str2[100];
 printf("Enter your second string:");
 fgets(str2,sizeof(str2),stdin);
 int l1=strlen(str1);
 int l2=strlen(str2);
 if(l1!=l2)
    {printf("Not Rotation");
	}
 else
   {
   
   
   }