#include <stdio.h>

int main(void) {
  char a,name[20];
  printf("Enter your name:");
  scanf("%c%s",&a,name);
  
  printf("Welcome, Z%s \n",name);
  return 0;
}