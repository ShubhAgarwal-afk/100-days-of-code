#include<stdio.h>
int main()
{ int a;
int k;
printf("Enter your peak value of stars(it must be odd):");
scanf("%d",&a);
for(k=1;2*k-1<a;k++)
{ for(int j=2*k-1;j>0;j--)
{printf("*");
printf("\n");}
printf("\n");
}

for(int j=2*k-1;2*k-1>0;k--)
{ for(int j=2*k-1;j>0;j--)
{printf("*");
printf("\n");}
printf("\n");
}

return 0;
}  