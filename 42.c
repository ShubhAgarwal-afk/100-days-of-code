#include<stdio.h>
void main()
{ int a;
int c=0; 
printf("Enter your number:");
  scanf("%d",&a);
  for(int i=1;i<a;i++)
  { if(a%i==0)
  {
  c=c+i;
  
    }
	}
	
	if(c==a){
	printf("Your number is perfect number");
	}
	else
	{printf("Your number is not perfect square");}
	}