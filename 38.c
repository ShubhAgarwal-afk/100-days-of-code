#include<stdio.h>
int main()
{ int a;
printf("Enter your number:");
scanf("%d",&a);
int sum =0;
int r;
int q=a;
while(q!=0)
{ r=q%10;
  sum=sum+r;
  q=q/10;
  }
  printf("%d",sum);
  return 0;
  }