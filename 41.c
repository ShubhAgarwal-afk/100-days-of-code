#include<stdio.h>
#include<math.h>
int main()
{int a;
printf("Enter your number:");
scanf("%d",&a);
int q=log10(a);
int n=a;
int f=n/pow(10,q);
int l=n%10;
n=(n-(f*pow(10,q))-l)+(l*pow(10,q))+f;
printf("%d",n);
return 0;
}