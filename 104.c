#include<stdio.h>
#include<math.h>
int main()
{   int n;
    printf("Enter your number:"); 
	scanf("%d",&n);
	float q=sqrt(n*(n+1)/2);
	int w=sqrt(n*(n+1)/2);
	if(q-w>0)
	{printf("-1");
	}
	else
	{ printf("%d",w);}
return 0;
}
	