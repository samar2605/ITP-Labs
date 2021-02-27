#include<stdio.h>

int main()
{
	int m,n;
	printf("Enter the value of m:");
	scanf("%d",&m);
	printf("Enter the value of n:");
	scanf("%d",&n);

	for(int i=0;i<m;i++)
	{    printf("\n");
	     if(i==0||i==m-1)
      	  	{
		    for(int j=0;j<n;j++)     
	            printf("* ");
		}
	     else
	      {   
		   printf("* ");
		   for(int j=0;j<(n-2);j++)
			printf("  ");
		   printf("*");   
	      }
	   	
	}
        printf("\n");
	return 0;
}
