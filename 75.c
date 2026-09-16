#include<stdio.h>
int main()
{int a;
int b;
printf("Enter your row number:");
scanf("%d",&a);
printf("Enter your column number:");
scanf("%d",&b);
int arr1[a][b];
printf("Enter the elements of your array:\n");
for(int i=0;i<a;i++)
   { for(int j=0;j<b;j++)
        {scanf("%d",&arr1[i][j]);
		}
		printf("\n");
   }   
int q;
int w;
printf("Enter your row number of second array:");
scanf("%d",&q);
printf("Enter your column number of second array:");
scanf("%d",&w);
int arr2[q][w];
printf("Enter the elements of your array of second array:\n");
for(int i=0;i<q;i++)
   { for(int j=0;j<w;j++)
        {scanf("%d",&arr2[i][j]);
		}
		printf("\n");
   }
if(a==q && b==w)
  { for(int x=0;x<a;x++)
   {for(int y=0;y<b;y++)
       {printf("%d",arr1[x][y]+arr2[x][y]);
	   }
	   printf("\n");
	   }
	   }
else
  {printf("Your array is not conformable of matrix addition:");
  }
  
  return 0;
  }