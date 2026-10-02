#include<stdio.h>
int main()
{  printf("Enter the date:");
   char str[11];
   fgets(str,sizeof(str),stdin);
   atoi(str[4]);
   atoi(str[5]);
   int n=str[4]*10+str[5];     
   char str_[]={'','-January-','-Feburary-','-March-','-April-','-May-','-June-','-July-','August','September','October','Novenmber','December','\0'};
   for(int j=0;j<2;j++)
      {putchar(str[j]);
	  }
	  putchar(str_[n]);
   for(int j=7;j<11;j++)
      {putchar(str[j]);
      }
	  return 0;
   }
   
/*The problems
 fgets("str,sizeof(str),stdin"): the quotes turn everything into one string literal. It should be fgets(str, sizeof(str), stdin).
 atoi(str[4]): atoi takes a string (char *), not a single char, and you throw away its return value anyway.
 int n = str[4]*10 + str[5]: str[4] holds the ASCII code of the digit ('1' is 49, not 1), so n comes out wrong. Subtract '0' to convert a digit character to its number.
 char str_[] = {'', '-January-', ...}: single quotes are for one character only. '' and '-January-' are compile errors. Month names need double quotes in an array of strings (char *), like we discussed.
 putchar(str_[n]): putchar prints one character, so it can't print a month name. Use printf("%s", ...).
 Index mismatch: for a dd-mm-yyyy input, the day is at 0-1, the month at 3-4, and the year at 6-9. Your code uses 4-5 and 7-10.
 Typos: "Feburary" and "Novenmber".
 str[11] fits exactly 10 characters plus \0, so the newline stays unread. str[12] is safer.



#include <stdio.h>

int main()
{
    char str[12];
    const char *months[] = {"", "January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};

    printf("Enter the date (dd-mm-yyyy): ");
    fgets(str, sizeof(str), stdin);

    int n = (str[3] - '0') * 10 + (str[4] - '0');   // month number

    for (int j = 0; j < 2; j++)      // day
        putchar(str[j]);

    printf("-%s-", months[n]);       // month name

    for (int j = 6; j < 10; j++)     // year
        putchar(str[j]);

    putchar('\n');
    return 0;
}



*/