#include<stdio.h>
int main()
{ int a;
int b;
printf("Enter the no. of rows of 1st array:");
scanf("%d",&a);
printf("enter the no. of columns of 1st array:");
scanf("%d",&b);
int arr1[a][b];
printf("Please enter your elements:");
for(int i=0;i<a;i++)
   {for(j=0;j<b;j++)
       {scanf("%d",&arr1[a][b]);
	   }
int c;
printf("Enter the no. of rows of 2nd array:");
scanf("%d",&c);
printf("enter the no. of columns of 2nd array:");
int d;
scanf("%d",&d);
int arr2[c][d];
printf("Please enter your elements:");
for(int i=0;i<c;i++)
   {for(j=0;j<d;j++)
       {scanf("%d",&arr2[c][d]);
	   }
if(b!=c)
  {printf("Your matrix cannot be multiplied");
  }
  else
  {   int arr_3[a][d];
      for(int j=0