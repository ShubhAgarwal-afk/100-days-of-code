#include<stdio.h>
int main()
{ int n;
printf("Enter the number of terms you want sum of:");
scanf("%d",&n);
float sum=0;
for(int j=1;j<=n;j++)
    { float a=2*j;
	  float b=3+(4*(j-1));
	  sum+=a/b;
	  }
	  printf("Your sum is:%f",sum);
	  return 0;
}
	  