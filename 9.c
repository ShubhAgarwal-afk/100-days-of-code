#include<stdio.h>
#include<math.h>
int main()
{float a;
float b;
float c;
printf("Enter Your Principal amount:");
scanf("%f",&a);
printf("Enter time(in years):");
scanf("%f",&b);
printf("Enter rate(Per annum):");
scanf("%f",&c);
float S;
S=(a*b*c)/100;
float C;
C=a* pow((1+c/100),b);
printf("The Coumpound intertest is:%f",C);
printf("The Simple intertest is: %f",S);
return 0;
}