#include <stdio.h>

int main(void) {
  int a,d1,d2,d3;
  printf("Enter an integer less than 1000:");
  scanf("%d",&a);
  d1=a/100;
  d2=a/10;
  d2=d2%10;
  d3=a%10;
  printf("digit1 %d \n",d1);
  printf("digit2 %d \n",d2);
  printf("digit3 %d: \n",d3);
  return 0;
}