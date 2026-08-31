#include<stdio.h>
int main()
{int a;
int b;
 printf("Enter your Cost price:");
scanf("%d",&a);
printf("Enter your selling price:");
scanf("%d",&b);
float s;
if(b>a)
{s=((float)(b-a)/a)*100;
printf("Your profit percentage:%f",s);
}
if(a>b)
{s=((float)(a-b)/a)*100;
printf("Your loss percentage:%f",s);
}
return 0;
}