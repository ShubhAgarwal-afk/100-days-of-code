#include<stdio.h>
#include<string.h>
int main()
{  char str[100];
   printf("Enter your string:");
   fgets(str,sizeof(str),stdin);
   int length =strlen(str);
   int count[length];
   for(i=0;i<length;i++)
      {for(int j=0;j<length;j++)
	      { if(str[i]=str[j])
		      {count[i]++;
			  }
	      }
		  }
		  int temp=0;
    for(i=0;i<length;i++)
      {for(int j=0;j<length;j++)
	      {if(count[i]<count[j])
		     {temp=count[j];
			 }
	      }
	  }
	  printf("The largest char is:%s",str[temp]);
	  return 0;
	  }
		    