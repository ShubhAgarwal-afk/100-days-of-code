#include<stdio.h>
#include<math.h>
int main()
{int a;
int b;
int c;
printf("Enter Your Principal amount:");
scanf("%d",&a);
printf("Enter time(in years):");
scanf("%d",&b);
printf("Enter rate(Per annum):");
scanf("%d",&c);
float S;
S=(a*b*c)/100;
float C;
C=a* pow((1+c/100),b);
printf("The Coumpound intertest is:%f",C);
printf("The Simple intertest is: %f",S);
return 0;
}