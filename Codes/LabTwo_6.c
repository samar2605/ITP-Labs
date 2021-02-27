#include <stdio.h>

int main(void) {
  char c;
  printf("Q :  The super computer ‘PARAM’ was developed by\n (A) TATA\n (B) IIT-Kharagpur\n (C) IIT-Kanpur\n (D) C-DAC\n");
  printf("Enter right option:");
  c=getchar();
  if(c=='D'||c=='d')
   {
     printf("You are correct.\n");
   }
   else
    {
      printf("You are wrong.\n The correct answer is (D)C-DAC\n");
    } 
  return 0;
}