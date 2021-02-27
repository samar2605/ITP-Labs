#include <stdio.h>

int main()
{
	
	int num1,num2,num3,large,mid,small;
	printf("Enter number 1:");
	scanf("%d",&num1);
	printf("Enter number 2:");
	scanf("%d",&num2);
	printf("Enter number 3:");
	scanf("%d",&num3);
	
	if(num1>num2)
	{
	  if(num1>num3)
	   {
		 large=num1;
		if(num2>num3)
		{
			mid=num2;
		    small=num3;
		}
		else 
		{
			mid=num3;
			small=num2;
		}
	    }
	}
	else if(num2>num3)
	{
		large=num2;
		if(num1>num3)
		{
			mid=num1;
		    small=num3;
		}
		else 
		{
			mid=num3;
			small=num1;
		}
	}
	else
	{
		large=num3;
		if(num1>num2)
		{
			mid=num1;
		    small=num2;
		}
		else 
		{
			mid=num2;
			small=num1;
		}
	}
    printf("Number in increasing order: %d %d %d\n",large,mid,small);
    return 0;	
}