#include<stdio.h>
int main()
{ int a; 
printf("Enter the peak number of stars(odd):");
scanf("%d",&a);
int h;
int d =1;
for(int j=a/2+1;j>0;--j)
   {
	for(int k=j-1;k>0;--k)
	   {printf(" ");
       }
    for(int h=1;h<=d;++h)
	   {printf("*");
       }
	   printf("\n");
	   d+=2;
	   }
   d-=4;
for(int j=0;j<a/2;++j)
   {for(int k=0;k<=j;++k)
	   {printf(" ");
	   }
	for(int r=d;r>0;r--)
	   {printf("*");
       }
	   printf("\n");
	   d=d-2;
   }
	   
return 0;
}
