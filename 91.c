#include<stdio.h>
#include<string.h>
int main()
{ printf("Enter your String:");
  char str[100];
  fgets(str,sizeof(str),stdin);
  int length =strlen(str);
  char t;
  for(int j=0;j<length;j++)
     {	 
	  if(atoi(str[j])==65 || atoi(str[j])==69 || atoi(str[j])==73 || atoi(str[j])==79 || atoi(str[j])==85 || atoi(str[j])==97 || atoi(str[j])==101 || atoi(str[j])==105 || atoi(str[j])==111 || atoi(str[j])==117)
	    { for(int i=0;i<length;i++)
             {str[i]=str[i+1];
			 }
	    }
     }
	 
	 
	 printf("Your string with removed vowels:%s",str);
	  return 0;
	  }