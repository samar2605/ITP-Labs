#include<stdio.h>
#define MASK 0x01
int main()
{
    int n,num,tmp,bi_tmp;
    printf("Enter a number:");
    scanf("%d",&n);
    num=n;
     printf("Decimal from right to left: ");
    while(num>0)
    {
        tmp=num%10;
        printf("%d",tmp);
        num=num/10;

    }

    num=n;
    printf("\nBinary from right to left: ");
    while(num>0)
    {
        bi_tmp=num&MASK;
        num>>=1;
        printf("%d",bi_tmp);
    }
    num=n;
    tmp=0;
    printf("\nBinary from left to right: ");
    for(int i=31;i>=0;i--)
    {int k;
        k=num>>i;
        if(k&MASK)
            { tmp=1;
                printf("1");
            }
        else if(tmp==1)
            printf("0");
    }
    printf("\n");
}
