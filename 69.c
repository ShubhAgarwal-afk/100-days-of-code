#include<stdio.h>
int main()
{int a;
int f;
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
int l=0;
for(int i=0,l=arr[i];i<a;i++)
   { if(l<arr[i])
       {l=arr[i];
	   f=i;
	   }
   }
	int sl=0;
for(int i=0;i<a && i!=f;i++)
   { if(sl<arr[i])
       {sl=arr[i];
	   }
	   }
	   
	   printf("Your second largest number:%d",sl);
	   return 0;
	   }
	   
       	