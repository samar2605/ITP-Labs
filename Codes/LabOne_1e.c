#include <stdio.h>

int main(void) {
  float rad;
  printf("Enter radius of the circle:");
  scanf("%f",&rad);
  printf("Area of the circle: %f \n",(3.14*rad*rad));
  printf("Circumference of the circle: %f\n",(2*3.14*rad));
  return 0;
}