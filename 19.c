#include<stdio.h>
int main()
{float a;
float b;
float c;
printf("Enter the length of side of triangle(a):");
scanf("%f",&a);
printf("Enter the length of side of triangle(b):");
scanf("%f",&b);
printf("Enter the length of side of triangle(c):");
scanf("%f",&c);
if(a==c && c==b && b==a)
{printf("Your triangle is equilateral");}
else if(a==c || c==b || b==a)
{printf("your triangle is isosceles");}
else
{printf("your triangle is scalene");}
return 0;
}