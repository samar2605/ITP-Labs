#include<stdio.h>

/*function arr_sum print the sum of array element form indices i to j
 * Precondition:element should be small enough so that sum won't overflow
 *              also i<=j
 *Postcondition:return sum
 */

double arr_sum(double arr[],unsigned i,unsigned j)
{
	double sum=0;
	for(unsigned k=i;k<=j;k++)
	{
		sum+=arr[k];
	}

      return sum;
}
int main()
{
	unsigned size,i,j;
	printf("Enter array size:");
	scanf("%u",&size);
	double arr[size];
	for(unsigned k=0;k<size;k++)
	{
		printf("Enter arr[%u]:",k);
		scanf("%lf",&arr[k]);
	}

	printf("Enter indices i(<%u):",size);
	scanf("%u",&i);
	printf("Enter indices j(<%u and >=%u):",size,i);
	scanf("%u",&j);
	if(i>=j)
	{
		printf("Invalid input\n");
		return 0;
	}
	printf("The sum of array from arr[%u] to arr[%u] is %lf\n",i,j,arr_sum(arr,i,j));

  return 0;	
}
