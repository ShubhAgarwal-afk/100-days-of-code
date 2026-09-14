#include<stdio.h>
int main()
{ int a;
printf("Enter your number:");
scanf("%d",&a);
int b=a;
int arr[10]={0,0,0,0,0,0,0,0,0,0};
while(b!=0)
    {int r=b%10;
	 arr[r]++;
	 b=b/10;
	 }
	 int max=arr[0];
	 int c=0;
for(int i=0;i<10;i++)
   {if(max<arr[i])
      { max=arr[i];
	    c=i;
		}
		}
		printf("The digit most times and is smallest is:%d",c);
		return 0;
		}
		
    