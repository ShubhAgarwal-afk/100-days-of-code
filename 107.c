#include<stdio.h>

int main()
{  int n;
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of array:");
for(int i =0;i<n;i++) scanf("%d",&arr[i]);

for(int i=0;i<n;i++) {
	int ans= -1;
	for(int j=i-1;j>=0;j--) {
		if(arr[j] >arr[i]) {
			ans=arr[j];
			break;
		}
	}
	if(i>0) printf(",");
	printf("%d",ans);
}
return 0;
}