#include<stdio.h>
int main()
{ int a;
int b;
printf("Enter your numbers:");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("The swapped numbers are:%d %d",a,b);
return 0;
}