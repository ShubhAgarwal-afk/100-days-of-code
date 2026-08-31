#include<stdio.h>
int main()

{ int a;
int b;
printf("Enter your number:");
scanf("%d %d",&a,&b);
int c;
c=a;
a=b;
b=c;
printf("The number swapped value are:%d %d",a,b);
return 0;
}
 