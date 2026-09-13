#include<stdio.h>
int main()
{int a;
printf("Enter your array length:");
scanf("%d",&a);
int arr[a];
printf("Enter the array elements:\n");
for(int i=0;i<a;i++)
   {scanf("%d",&arr[i]);
   }
printf("Your array is:\n");
for(int i=0;i<a;i++)
   {printf("%d\n",arr[i]);
   }
int k;
printf("Enter the rotating factor:");
scanf("%d",&k);
