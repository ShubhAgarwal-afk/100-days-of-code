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
{
int lcm=(a*b)/j;
printf("Your lcm:%d",lcm);}
break;
}}
else
{for(int j=a/2;j>=1;j--)
{if((a%j && b%j)==0)
{
int lcm=(a*b)/j;
printf("Your lcm:%d",lcm);}
break;
}}

return 0;
}