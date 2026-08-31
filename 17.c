#include <stdio.h>
#include <math.h>
 int main()
 {float a;
 float b;
 float c;
 printf("Enter the X sqaured coffiecient:");
 scanf("%f",&a);
 printf("Enter the X coffiecient:");
 scanf("%f",&b);
 printf("Enter the constant:");
 scanf("%f",&c);
 if(((b*b)-(4*a*c))>=0)
 {float Answer ;
 Answer=(-b+sqrt(b*b-4*a*c));
 Answer=Answer/(2*a);
 float answer;
 answer=(-b-sqrt(b*b-4*a*c))/(2*a);
 printf("First root = %f\n",Answer);
 printf("second root = %f\n",answer);
 if(answer==Answer)
 {printf("Your roots are real and same");}
else{printf("Your roots are real and equal");}
 }
 else
{ printf("Your roots are complex");}
return 0;
 }
