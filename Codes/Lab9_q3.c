#include<stdio.h>

struct complex_t{
                   double real;
                   double imag;
                 };

typedef struct complex_t complex;

void accept_value(complex *c)
{
    printf("Enter the real part:");
    scanf("%lf",&(c->real));
    printf("Enter the imaginary part:");
    scanf("%lf",&(c->imag));

}

complex add(complex a,complex b)
{
    complex sum;
    sum.real=a.real+b.real;
    sum.imag=a.imag+b.imag;
    return sum;
}

complex product(complex a,complex b)
{
    complex prod;
    prod.real=(a.real*b.real)-(a.imag*b.imag);
    prod.imag=(a.real*b.imag)+(a.imag*b.real);
    return prod;
}

void print(complex c)
{
    printf("Real: %lf  ",c.real);
    printf("Imaginary: %lf\n",c.imag);

}
int main()
{
    complex num1,num2;

    accept_value(&num1);
    accept_value(&num2);
    printf("Addition of two complex number\n");
    print(add(num1,num2));
    printf("Product of two complex number\n");
    print(product(num1,num2));

    return 0;
}
