#include<stdio.h>
int main()
{
    float x;

    x=5/4;
    printf(" %f",x);

    x=5.0/4.0;
    printf(" %f",x);
    printf(" %.1f",x);

    //Modify the next line so that the correct value is printed.
    x=4.0/5.0;
    printf(" %f",x);

    //Modify the print statement to print up to 2 digits of accuracy.
    x=3.1416;
    printf(" %.2f\n",x);
    return 0;
}