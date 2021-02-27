#include<stdio.h>

int main()
{
	int num,small_num,large_num;
	printf("How many numbers you want to enter:");
	scanf("%d",&num);
	
	int array[num];
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	
	small_num=array[0];
	large_num=array[0];

	for(int i=1;i<num;i++)
	{
		if(small_num>array[i])
	 	   small_num=array[i];
		
		if(large_num<array[i])
		  large_num=array[i];

	}

	printf("Smallest number:%d\n",small_num);
	printf("Largest number:%d\n",large_num);
    
      return 0;

}
