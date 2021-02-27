#include<stdio.h>
#include<string.h>

unsigned IsHeterogram(char str[])
{
    unsigned len=strlen(str),flag=0;
    for(unsigned i=1;i<len;i++)
    {
        for(unsigned j=0;j<i;j++)
        {
            if(str[j]==str[i])
                return 1;
        }
    }
    return 0;    
}

int main()
{
    unsigned flag;
    char str[30];
    printf("Enter a string:");
    scanf("%s",str);
     
    flag=IsHeterogram(str);

    if(flag==1)
    {
        printf("String is not heterogram\n");
    }
    else
        printf("String is a heterogram\n");

  return 0;
}