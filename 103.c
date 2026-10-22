#include <stdio.h>

int main() {
    int n;
	printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
	printf("Enter the elements of array:");
    for (int i = 0; i < n; i++) 
	{scanf("%d", &arr[i]);
    }
	int i=0;
	while(i<n)
	{     int left,right=0,0;
          int pi=i;
         for(int j=i;i>0;i--)
		    {left=left+arr[i-1];
		    }
	     for(int j=i;i<n;i++)
		   {right=right+arr[i+1];
	       }
		 if(right==left)
		 {printf("The pivot index is %d and elemtn at index is %d\n",pi,arr[pi]);
	     }
	}
			 
		
    return 0;
}

