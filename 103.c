#include <stdio.h>

int main() {
    int n;
	printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
	printf("Enter the elements of array:");
	int total =0;
	for (int i = 0; i < n; i++)
	{		scanf("%d", &arr[i]);
           total+=arr[i]; 
	}
	int left =0,ans=-1;
	for(int i =0;i<n;i++)
	{if(left ==total -left -arr[i])
		{ans =i;
	break;
		}
		left+=arr[i];
	} 
	printf("%d",ans);
		    
		
    return 0;
}



/*Your two-pointer idea breaks on this problem, and the third sample ([2,1,-1], expected output 0) shows why. It has three bugs:
Infinite loop: if sum_S == sum_E while start != end, neither if runs, so nothing changes. For [1,2,3], the sums become 3 and 3 and the loop never ends.
Negative numbers: moving the smaller side inward only works if all values are positive. With negatives, a bigger sum doesn't mean you should stop growing that side.
Leftmost pivot: the problem wants the leftmost index, and your pointers can't guarantee tha

int start=0,end=n-1,sum_S=arr[0],sum_E=arr[n-1]; 
    while(start!=end)  
		{   if(sum_S<sum_E)
			  {start++;
		       sum_S=sum_S+arr[start];
			  }
			if(sum_S>sum_E)
			  {end--;
			  sum_E=sum_E+arr[end];
			  }
		}
		if(sum_S==sum_E) printf("%d",end);
		else printf("-1");
*/