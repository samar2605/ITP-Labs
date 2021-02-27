#include<stdio.h>
#define SIZE 30
int main()
{
  char str[SIZE];
  unsigned i,count_a=0,count_e=0,count_i=0,count_o=0,count_u=0,str_len;
  printf("Enter a string:");
  fgets(str,SIZE,stdin);
  for(i=0; str[i]!='\0' && str[i]!='\n';i++)
  {
 	if(str[i]=='A'||str[i]=='a')
		count_a++;
	else if(str[i]=='E'||str[i]=='e')
	       	count_e++;
	else if(str[i]=='I'||str[i]=='i')
		count_i++; 
	else if(str[i]=='O'||str[i]=='o')
		count_o++;
	else if(str[i]=='U'||str[i]=='u')
		count_u++;

  }
  str_len=i;
  printf("A:%u\n",count_a);
  printf("E:%u\n",count_e);
  printf("I:%u\n",count_i);
  printf("O:%u\n",count_o);
  printf("U:%u\n",count_u);
  printf("String Length:%u\n",str_len);

  return 0;

}
