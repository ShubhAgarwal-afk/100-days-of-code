#include<stdio.h>
int main()
{ float d; 
printf("Enter the Radius of Circle:");
scanf("%f",&d);
float a;
float b;
a=2*3.14*d;
b=3.14*d*d;
printf("The circumference of Circle:%f\n",a);
printf("The area of Circle:%f",b);
return 0 ;
}