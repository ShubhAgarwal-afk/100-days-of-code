#include<stdio.h>
int main()
{ int n;
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
int q;
printf("Enter the index at which you want insert:");
scanf("%d",&q);
printf("\n");
int y;
printf("Enter the number you want to insert:");
scanf("%d",&y);
for(int x=n;x>q;x--)
   {arr[x]=arr[x-1];
   }
   arr[q]=y;
 for(int i=0;i<=n;i++)
   {printf("%d",arr[i]);
   }
	   return 0;
}
   
