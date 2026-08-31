#include<stdio.h>
int main()
{    int a;
     printf("Enter your no.:");
	 scanf("%d",&a);
	 if(a!=0)
	 {   if(a<0)
	      {printf("your number is negative");}
		  
		  else
		  { printf("Your number is positive");}
		  }
		  else { printf("Your number is Zero");}
		  return 0;
		  }