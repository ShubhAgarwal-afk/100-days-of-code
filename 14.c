#include<stdio.h>
int main()
{int Y;
printf("Enter the year:");
scanf("%d",&Y);
if(Y%4!=0)
{
	printf("Your year is not a leap year");
}

else
{
if(Y%400!=0 & Y%100==0)
{
	printf("Your leap is not leap year");
}
else
{
	printf("Your year is leap year");
}
}
return 0;
}
