#include<stdio.h>
int main()
{
    int i;
    printf("How many times you want to print ");
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {
        for(int k=0;k<j;k++)
            printf("*");
        printf("\n");
    }

}
