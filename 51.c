#include<stdio.h>
int main()
{ int a;
printf("Enter your number of rows:");
scanf("%d",&a);
for(int j=a;j>0;j--)
{
	for(int f=j-1;f>0;f--)
       { printf(" ");}
	for(int d=j;d<=a;d++)
	{printf("%d",d);}
printf("\n");
}
return 0 ;
}