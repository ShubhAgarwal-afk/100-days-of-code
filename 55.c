#include<stdio.h>
int main()
{int a;
printf("Enter your number:");
scanf("%d",&a);
if(a<=1)
{ printf("No prime number exist:");
}

else 
{
printf("prime numbers are:\n");
if(a==2)
{printf("2");}
else
{ printf("2\n"); 
for(int k=1;2*k+1<=a;k++)
{int w=0;
	  for(int q=1;q<k;q++)
	      {int r;
		   r=(2*k+1)%(2*q+1);
	       if(r==0)
			  {  ++w;
		      }
		  }
						   
               if(w==0)
			       printf("%d\n",2*k+1);
}
				   
				   }
				   
				   }
return 0;}
