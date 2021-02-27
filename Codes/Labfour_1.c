#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,sum=0,fact=1,square;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        printf("*");
        printf("\n");
    for(int i=1;i<n;i++)
       {  square=pow(i,2);
          if(square<n)
        printf("%d ",square);
       }
    for(int i=1; i<=n;i++)
        fact=fact*i;
     printf("\nn factorial is %d\n",fact);
     printf("Enter n numbers: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        sum+=num;
    }
    printf("Sum of n numbers is %d \n",sum);
}
