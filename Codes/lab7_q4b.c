#include<stdio.h>

/*fall_factorial is function to calculate falling factorial
 * Precondition: x and n small enough so that product would not overflow
 * 		 x is of type double and n is a positive integer
 *
 * Postcondition: return product=x(x-1)....(x-n+1)
 */

double fall_factorial(double x,unsigned n)
{
	double product=1,tmp;
	tmp=x;
	while(tmp>=(x-n+1))
	{
		product*=tmp;
		tmp--;
	}			
	return product;
}

/* function to compute n factorial
 * Precondition:n should be small enough so that fact won't overflow
 *
 * Postcondition: return factorial of n
 */
long long unsigned factorial(unsigned n)
{
	long long unsigned fact=1;
	if(n==0||n==1)
		return fact;
	while(n>1)
	{
		fact*=n;
		n--;
	}
	return fact;

}

/*realBinomialCoefficient function
 * Precondition: x and n should be small enough to prevent overflow
 *
 * Postcondition: return result=(x(x-1)...(x-n+1))/(n!) 
 */

double realBinomialCoefficient(double x, unsigned n)
{
	return fall_factorial(x,n)/factorial(n);
}
int main()
{
	double x;
	unsigned n;
	printf("Enter a number x:");
	scanf("%lf",&x);
	printf("Enter a munber n(<x):");
	scanf("%d",&n);
	
	printf("The value is %lf\n",realBinomialCoefficient(x,n));

  return 0;
}
