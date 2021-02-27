#include<stdio.h>
int main()
{
	char c;
	int n;
	printf("Enter a character(a-z):");
	c=getchar();
	printf("Enter the number:");
	scanf("%d",&n);
	c=c+n;
	if (c>122)
	{
		c=(c-122)+97;
	  
	}
	
	printf("Character is %c",c);
	
  return 0;	
}
