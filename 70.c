#include<stdio.h>
int main()
{int a;
printf("Enter your array length:");
scanf("%d",&a);
int arr[a];
printf("Enter the array elements:\n");
for(int i=0;i<a;i++)
   {scanf("%d",&arr[i]);
   }
printf("Your array is:\n");
for(int i=0;i<a;i++)
   {printf("%d\n",arr[i]);
   }
int k;
printf("Enter the rotating factor:");
scanf("%d",&k);
int arr_[a];
if(k>a)
  {
   for(int j=0,r=k%a;j<a;j++)
      { if(j+r<a)
		  {arr_[j+r]=arr[j];
	      }
		else
		  {arr_[j+r-a]=arr[j];
	      }
	  }
  }
else
   {for(int j=0;j<a;j++)
      { if(j+k<a)
		  {arr_[j+k]=arr[j];
	      }
		else
		  {arr_[j+k-a]=arr[j];
	      }
	  }
   }
   for( int u=0;u<a;u++)
      {printf("%d\n",arr_[u]);
   }
 return 0;
}
	  
		