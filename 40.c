#include<stdio.h>
#include<math.h>
int main()
{int a;
printf("Enter your number(binary):");
scanf("%d",&a);
int sum=0;
int r;
int n=a;
for(int i=0;i<=log10(a);i++)
{ 	r=n%10;
if(r==0)
{r=1;
sum=sum+r*pow(10,i);
}
else
{r=0;
sum=sum+r*pow(10,i);
}

n=n/10;
}
printf("Your 1's complement of your number:%d",sum);
return 0;
}