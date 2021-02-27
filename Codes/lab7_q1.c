/* Program to accept integer n and then n*n matrix and a vector 
 * Print the product of matrix and vector */

#include<stdio.h>

int main()
{
	int n;
	printf("Enter a number n:");
	scanf("%d",&n);

	int matrix[n][n],vector[n][1],product[n][1];
	printf("Enter matrix elements\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Enter M[%d][%d]:",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Enter vector\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter v[%d][1]:",i);
		scanf("%d",&vector[i][1]);
	}
	
	printf("The product M.v is\n");
	for(int i=0;i<n;i++)
	{
		product[i][1]=0;
		for(int j=0;j<n;j++)
		{
			product[i][1]+=matrix[i][j]*vector[j][1];
		
		}
		printf("%d\n",product[i][1]);
	}


    return 0;	
}
