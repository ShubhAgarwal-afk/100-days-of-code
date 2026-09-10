#include<stdio.h>
void main()
{ int a; 
int b;
printf("Enter Your number of rows:");
scanf("%d",&a);
printf("Enter Your number of columns:");
scanf("%d",&b);
for(int j = 1;a>=j;j++)
{for(int f=1;f<=b;f++)
{printf("*");}
printf("\n");}
}