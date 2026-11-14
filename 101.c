#include<stdio.h>
int binarysearch(int a[],int n,int x)
  { int lo =0 ,hi=n;
      while(lo<hi)
	      {int mid = (lo+hi)/2;
	      if(a[mid]>=x) hi=mid;
		  else lo=mid +1;
		  }
		  return lo;
  }
  
int main()
{  int n,target;
    printf("Enter the size of your array:"); 
    scanf("%d",&n);
	int nums[n]; 
	printf("Enter your array:");
	for(int i=0;i<n;i++) scanf("%d",&nums[i]);
	printf("Enter your target:");
	scanf("%d",&target);
	
	int first =binarysearch(nums,n,target);
	if(first == n || nums[first] != target) printf("-1,-1\n");
	else
	{ int last=binarysearch(nums,n,target+1)-1;
      printf("%d,%d\n",first,last);
	}
	return 0;
}














































