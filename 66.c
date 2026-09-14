#include<stdio.h>
int main()
{int n;
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n+1];
printf("Enter the array:\n");
for(int i=0;i<n;i++)
   {scanf("%d",&arr[i]);
   }
printf("Your entered array:\n");
for(int i=0;i<n;i++)
   {printf("%d",arr[i]);
   }
   printf("\n");
printf("Enter the number you want to insert:");
int q;
scanf("%d",&q);
for(int i=0;i<n;i++)
   {if(arr[i]>q)
      {for(int j=n;j>=i;j--)
	      {arr[j+1]=arr[j];
		  }
		  arr[i]=q;
		  break;
		  }
		  
		  }
printf("Your new array:\n");
for(int i=0;i<=n;i++)
   {printf("%d",arr[i]);
   }
   return 0;
   }