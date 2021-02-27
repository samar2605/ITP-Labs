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

int main()
{
	double x;
	unsigned n;
	printf("Enter a number x:");
	scanf("%lf",&x);
	printf("Enter a munber n(<x):");
	scanf("%d",&n);
	
	printf("The fallingFactorial is %lf\n",fall_factorial(x,n));


  return 0;
}
