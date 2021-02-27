#include<stdio.h>
#include<math.h>
#define SIZE 30
#define MASK 0x01

int main()
{
	char str[SIZE];
	int strlen,num,subset_count;
	printf("Enter a string:");
	fgets(str,SIZE,stdin);
	for(strlen=0;str[strlen]!='\0'&&str[strlen]!='\n';strlen++)
	;
        subset_count=pow(2,strlen);  
	for(int i=0; i<subset_count;i++)
	{ 
		num=i;
	
	       for(int j=0;j<strlen;j++)	
	       {       
		       if(num&MASK)
		       {
			       printf("%c",str[j]);
	         	 }
			 num>>=1;
	       }
	      printf("\n"); 

	}
	
       printf("\n");
         
   return 0;
}
