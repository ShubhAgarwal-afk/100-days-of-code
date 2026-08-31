#include<stdio.h>
int main()
{float C;
printf("Enter the Temperature in celsius:");
scanf("%f",&C);
float F;
F=(C*1.8)+32;
printf("The temperature in Fahrenheit:%f",F);
return 0;
}