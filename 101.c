#include<stdio.h>
int main()
{  
int a;
printf("Enter the Length of array:");
scanf("%d",&a);
int arr[a];
printf("Enter the Elements of array:");
for(int i=0;i<a;i++)
   { scanf("%d",&arr[i]);
   }
int target ;
printf("Enter your target:");
scanf("%d",&target);

return 0;
}

