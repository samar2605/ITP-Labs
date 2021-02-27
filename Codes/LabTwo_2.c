#include <stdio.h>

int main(void) {
  float c,f;
  printf("Enter temperature in celcius:");
  scanf("%f",&c);
  f=c*(9.0/5.0)+32.0;
  printf("Temperature in fahrenheit is %f\n",f);
  return 0;
}