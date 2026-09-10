#include<stdio.h>
int main()
{int a;
printf("Enter the number of rows:");
scanf("%d",&a);
for(int j=a;j>0;--j)
   { for(int s=0;s<a-j;++s)
        { printf(" ");
		}
		
	for(int f=j;f>0;--f)	
	   {printf("*");
	   }
	   printf("\n");
       
   }
	return 0;
	}