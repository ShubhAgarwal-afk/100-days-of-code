#include<stdio.h>
int main()
{int n;
int w =0;
printf("Enter the size of array:");
scanf("%d",&n); 
int arr[n];
printf("Enter your elements:\n");
for(int j=0;j<n;j++)
   { scanf("%d",&arr[j]);
   }
int a;
printf("Enter the element you want to search:");
scanf("%d",&a);
for(int b=0;b<n;b++)
   {if(arr[b]==a)
      {printf("Your element was in at address:%d\n",b+1);
	   printf("%d",arr[b]);
	   w++;
	   
	  }
    }
	if(w==0)
	{
	printf("Your entered value is not in array");
	}
	return 0;
	}