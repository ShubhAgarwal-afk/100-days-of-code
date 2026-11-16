#include<stdio.h>

int main() {
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int nums[n],ans[n];
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++) scanf("%d",&nums[i]);
	
	int prefix=1;
	for(int i=0;i<n;i++) {
		ans[i]=prefix;
		prefix *=nums[i];
	}
	
	int suffix =1;
	for(int i=n-1;i>=0;i--) {
		ans[i] *=suffix;
		suffix *=nums[i];
	}
	printf("[");
	for(int i=0;i<n;i++)
	{ if(i>0) printf(",");
      printf("%d",ans[i]);
	}
	printf("]");
	return 0;
}