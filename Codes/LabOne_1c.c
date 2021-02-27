#include <stdio.h>

int main(void) {
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  printf("The quotient when a is divided by b is %d and the remainder when a is divided by b is %d\n",a/b,a%b);
  return 0;
}