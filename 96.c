#include<stdio.h>
#include<string.h>
int main()
{  char str[100];
   printf("Enter the string:");
   fgets(str,sizeof(str),stdin);
   int n = strlen(str);
   int i =0;
   while(i<n)
    {  
        while(i<n && str[i]==' ')
             {i++;}
		int start =i;
		
		while(i<n && str[i] != ' ')
		     {i++;}
	    int end =i-1;
		while(start<end)
		     { char t= str[start];
			   str[start] =str[end];
			   str[end] =t;
			   start++;
			   end--;
			   }
			   }
			   
             			 
    
	printf("Your reversed sentence string is:%s",str);
   return 0;
   
   }
   
