#include<stdio.h>
int main()
{ int a;
printf("Enter your number:");
scanf("%d",&a);
for(int b =2;b<=a;b=b+2)
{ printf("%d\n",b);
}
return 0;
}