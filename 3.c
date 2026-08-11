#include<stdio.h>
int main()
{ 
float l;
float b;
printf("Enter the length of rectangle:");
scanf("%f",&l);
printf("Enter the breadth of rectangle:");
scanf("%f",&b);
float A;
float P;
A=l*b;
P=2*(l+b);
printf("The Perimeter:%f\n",P);
printf("The area:%f",A);
return 0 ;
}