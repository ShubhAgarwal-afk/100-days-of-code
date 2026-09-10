#include<stdio.h>
int main()
{ int n;
printf("Enter the number of terms you want sum of:");
scanf("%d",&n);
float sum=1;
for(int j=1;j<n;j++)
   {float a=2*j+1;
    float b=2*(j+1);
	sum+=a/b;}
	printf("Your sum is:%f",sum);
	return 0;
	}