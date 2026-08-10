#include<stdio.h>
int main()
{ float a;
float b;
float c;
float d;
float e;
float f;
printf("Enter the 1st number:");
scanf("%f",&a);
printf("Enter the 2nd number: ");
scanf("%f",&b);
c=a+b;
d=a-b;
e=a*b;
f=(int)a/b;
printf("Sum is: %f\n",c);
printf("Difference is: %f\n",d);
printf("Product is: %f\n",e);
printf("Quiotent is: %f\n",f);
return 0 ;
}