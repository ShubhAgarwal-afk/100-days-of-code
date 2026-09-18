#inlcude<stdio.h>
int main
{int a;
  printf("Enter your index of array:");
  scanf("%d",&a);
  int arr[a][a];
printf("Please enter your array:");  
  for(int i=0;i<a;i++)
   { for(int j=0;j<a;j++)
        {scanf("%d",&arr[i][j]);
		}
		printf("\n");
   }
printf("Your entered array is:\n");   
for(int x=0;x<a;x++)
   {for(int y=0;y<a;y++)
       {printf("%d",arr[x][y]);
	   }
	   printf("\n");
	   }
for(int i=0;i<a;i++)
   { for(j=i+1;j<a;j++)
     {if(arr[i][i]==arr[j][j])
	    {printf("Your elements are not distinct");
		 break;}
		}if(arr[i][i]==arr[j][j])
		{break;}
		}
return 0;
}