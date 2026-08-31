#include<stdio.h>
int main()
{int a;
printf("Enter your factorial upper limit:");
scanf("%d",&a);
long long p=1;
if(a!=0)
{
for(int n=1;n<=a;n++)
{p=p*n;}
printf("the factorial of a is %lld",p);
}
else
{ printf("Your factorial of  a is 1");}
return 0;
}