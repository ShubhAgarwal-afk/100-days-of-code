#include<stdio.h>
int main()
{int n;
printf("Enter the size of array:");
scanf("%d",&n); 
int arr[n];
printf("Enter your elements:\n");
for(int j=0;j<n;j++)
   { scanf("%d",&arr[j]);
   }
int c;
for(int a=0;a<n/2;a++)
   {
	   c=arr[a];
	   arr[a]=arr[n-1-a];
	   arr[n-1-a]=c;
   }
   for(int j=0;j<n;j++)
   {printf("%d\n",arr[j]);
   }
   return 0;
}
/*if(n%2==0)
  {for(int a=0;a<=((n/2)+1);a++)
      {
	  c=arr[a];
	   arr[a]=arr[n-1-a];
	   arr[n-1-a]=c;
	 
	 }
    for(int j=0;j<n;j++)
   {printf("%d\n",arr[j]);
   } 
 }
else
   {for(int a=0;a<(n+1)/2;a++)
	   {c=arr[a];
	   arr[a]=arr[n-1-a];
	   arr[n-1-a]=c;
	   }
   
   
   }
   }*/
