#include<stdio.h>
int main()
{int a;
	printf("Enter the number:");
scanf("%d",&a);
printf("Factors are:1");
for(int j = a/2;j>=1;j--)
{if (a%j==0)
    {printf(",%d",a/j);}
	}
	return 0;
	}