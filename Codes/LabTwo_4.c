#include <stdio.h>
#include<math.h>

int main(void) {
  float a,b,c,D;
  printf("Enter a:");
  scanf("%f",&a);
  printf("Enter b:");
  scanf("%f",&b);
  printf("Enter c:");
  scanf("%f",&c);
  D=(b*b)-(4*a*c);
  if(D<0)
   {
     printf("Roots are imaginary.\n");
   }
    else
    {
      if(D>0)
        {
          printf("Roots are real.\n");
          printf("Root 1 is %f\n",((-b+sqrt(D))/(2*a)));
          printf("Root 2 is %f\n",((-b-sqrt(D))/(2*a)));
         } 
      else
       {
        printf("Roots are equal\n");
        printf("Root is %f\n",(-b/(2*a)));
       }
    }

  return 0;
}