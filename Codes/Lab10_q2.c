#include<stdio.h>

void swap(char *a,char *b)
{
    char tmp=*a;
    *a=*b;
    *b=tmp;

}
void permute(char *str,int n)
{
    unsigned k;
    for(unsigned i=0;i<n;i++)
    {
            k=n;
            swap(&str[n-1],&str[i]);
            k--;
            if(k>0)
                permute(str,k);
            else
                printf("%s\n",str);
            swap(&str[n-1],&str[i]);

    }

}

int main()
{
    char str[20];
    unsigned num;
    printf("Enter the string:");
    scanf("%s",str);
    printf("Enter the number:");
    scanf("%u",&num);
    permute(str,num);

  return 0;
}
