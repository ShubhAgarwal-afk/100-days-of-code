#include<stdio.h>
int main()
{ int a,b;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
if(a>b)
{for(int j=b/2;j>=1;j--)
{if((a%j && b%j)==0)
{printf("%d",j);}
break;
}}
else
{for(int j=a/2;j>=1;j--)
{if((a%j && b%j)==0)
{printf("%d",j);}
break;
}}
return 0;
}