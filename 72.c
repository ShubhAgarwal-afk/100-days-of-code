#include<stdio.h>
int main()
{int a;
int b;
printf("Enter your row number:");
scanf("%d",&a);
printf("Enter your column number:");
scanf("%d",&b);
int arr[a][b];
printf("Enter the elements of your array:\n");
for(int i=0;i<a;i++)
   { for(int j=0;j<b;j++)
        {scanf("%d",&arr[i][j]);
		}
		printf("\n");
   }
for(int x=0;x<a;x++)
   {for(int y=0;y<b;y++)
       {printf("%d",arr[x][y]);
	   }
	   printf("\n");
	   }
int sum=0;	   
for(int q=0;q<a;q++)
   {for(int s=0;s<b;s++)
       {sum=sum+arr[q][s];
	   }
	}
printf("%d",sum);
return 0;
}