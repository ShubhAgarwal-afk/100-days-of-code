#include<stdio.h>
#include<math.h>
int main()
{ int a ;
printf("Enter your Number:");
scanf("%d",&a);
int i = log10(a);
int s=0;
int r;

for(int n=a;n!=0;i--)
{r=n%10;
s=s+r*pow(10,i);
n=n/10;
}
if(s==a)
{printf("Your number is palindrome");
}
else{printf("Your number is not palindrome");}

return 0;
}
