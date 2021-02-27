#include<stdio.h>

/*This function prints the string text, count many times.
* Precondition:count should be positive
* Postcondition: prints string text, count many times
*/
void multiStringPrint(char text[],unsigned int count)
{
	for(unsigned i=0;i<count;i++)
	{
		printf("%s\n",text);
	}
}


/*This function prints the substring of the given string text, between indices i and j, inclusive.
 *Precondition:i and j should be positive and less than string length also i<=j
 *Postcondition: prints substring of string text, between i and j(inclusive)
 */
void substringPrint(char text[],unsigned int i, unsigned int j)
{
  	for(unsigned k=i;k<=j;k++)
		printf("%c",text[k]);
}


int main()
{
	 char string[20]="Programming_world";
  	 unsigned count,i,j;
  	 printf("How many times to print string:");
 	 scanf("%u",&count);
  	 multiStringPrint(string,count);
	 
	 printf("For substring\nEnter indices i:");
	 scanf("%u",&i);
	 printf("Enter indices j:");
	 scanf("%u",&j);
	 printf("Substring is: ");
	 substringPrint(string,i,j);
	 
	 printf("\n");

    return 0;
}
