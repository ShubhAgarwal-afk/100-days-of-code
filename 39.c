#include<stdio.h>
int main()
{ int a;
printf("Enter your number:");
scanf("%d",&a);
int sum =1;
int r;
int q=a;
int i=0;
while(q!=0)
{ r=q%10;
  if(r%2!=0)
  {i++;
	  sum=sum*r;}
  q=q/10;
  }
  if(i!=0)
  {
  printf("%d",sum);
  
  }
  
  else
  {printf("Your number doesn't have odd digit:");
  }
	  return 0;
  }