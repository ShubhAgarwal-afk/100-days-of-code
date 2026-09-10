#include<stdio.h>
#include<math.h>
int main()
{int a;
printf("Enter you number:");
scanf("%d",&a);
int i=log10(a)+1;
int n=a;
int r;
int s=0;
while(n!=0)
{r=n%10;
s=s+pow(r,i);
n=n/10;
}
if(a==s)
{printf("Your number is armstrong number:");
}
else
{printf("Your number is not armstrong number:");}
return 0;
}