#include<stdio.h>
int main()
{   int m,n;
    printf("Enter the size of first array:");
	scanf("%d",&m);
	int a[m];
	printf("Enter the elements of first array:");
	for(int i=0;i<m;i++) scanf("%d",&a[i]);
	
	printf("Enter the size of second array:");
	scanf("%d",&n);
	int b[n];
	printf("Enter the elements of second array:");
	for(int i=0;i<n;i++) scanf("%d",&b[i]);
	
	int res[m+n];
	int i=0,j=0,k=0;
	
	while(i<m && j<n) {
		if(a[i]<=b[j]) res[k++] =a[i++];
		else           res[k++] =b[j++];
	}
	while(i<m) res[k++] =a[i++];
	while(j<n) res[k++] =b[j++];
	
	for(int x=0;x<m+n;x++) {
		if(x>0) printf(" ");
		printf("%d",res[x]);
	}
	return 0;
}