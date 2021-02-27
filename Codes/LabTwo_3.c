#include<stdio.h>
#include<complex.h>

int main()
{
    double complex z1=2.0+3.0*I,z2=3.0+8.0*I;
    printf(" Real part:%lf\n Imaginary part:%lf\n",creal(z1*z2),cimag(z1*z2));

    return 0;
}