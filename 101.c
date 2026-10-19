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
int low =0;
int high=n-1;
while(low<=high)
   {int mid =(low+high)/2;
     if(arr(mid)==target)
	   {printf("Your element is at index %d:",mid);
       }
	   else
	   {if(arr[mid]<target)
		   {low=mid+1;
	       }
		else 
		    {high=mid-1
		    }
	   }
   }
   
        

return 0;
}

