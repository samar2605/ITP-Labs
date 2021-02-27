#include<stdio.h>

void rem_duplicate(char *arr)
{
    unsigned str_len=0,count=1;
    for(unsigned i=0;arr[i]!='\0';i++)
        str_len++;
    char cmp[str_len],tmp;
     cmp[0]=arr[0];
    for(unsigned i=1;i<str_len;i++)
    {
        unsigned k=0;
        tmp=arr[i];
        for(unsigned j=0;j<i;j++)
        {
            if(tmp==cmp[j])
                {
                  k++;
                }
        }
        if(k==0)
        {
            cmp[count]=arr[i];
            count++;
        }
    }
    for(unsigned i=0;i<count;i++)
        printf("%c",cmp[i]);



}
int main()
{
    char str[20];
    printf("Enter the string:");
    scanf("%s",str);
    printf("Output string:");
    rem_duplicate(str);
    printf("\n");

  return 0;
}

