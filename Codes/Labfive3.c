#include<stdio.h>
#define SIZE 30

int main()
{
	char str[SIZE],tmp_ch;
	int k;
        printf("Enter a string:");
	//scanf("%s",str);
	fgets(str,SIZE,stdin);
	printf("How many times to rotate left:");
	scanf("%d",&k);

	for(int i=0;i<k;i++)
	{
            for(int j=1;str[j]!='\0'&& str[j]!='\n';j++)
	    {
		    tmp_ch=str[j];
		    str[j]=str[j-1];
		    str[j-1]=tmp_ch;
	    }
	}

	printf("Left rotated string:%s\n",str);

     return 0;

}
