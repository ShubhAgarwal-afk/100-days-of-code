#include<stdio.h>
int main()
{  int a;
printf("Enter your number:");
scanf("%d",&a);
int sum=0;
for(int n=a;n!=0;n=n/10)
   {int r=n%10;
   for(int q=r;q<1;q--)
       { int p=1;
         p=p*q;
sum=sum+p;
}
}		
return 0; 
	   
	   }