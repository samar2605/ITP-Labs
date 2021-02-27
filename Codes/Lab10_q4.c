#include<stdio.h>

void reminder(int divident[],int divisor[],int num)
{
    int multi,tmp[3];
    multi=divident[num]/divisor[2];
    for(unsigned i=0;i<3;i++)
    {
        tmp[i]=divisor[i]*multi;
    }
    for(int i=num,j=2;j>=0;i--,j--)
    {
        divident[i]-=tmp[j];
    }
    num--;
    if(num<2)
     {
         if(divident[0]>0)
            printf("The reminder is %dx+%d\n",divident[1],divident[0]);
         else
            printf("The reminder is %dx%d\n",divident[1],divident[0]);
         return;
    }
    else
        reminder(divident,divisor,num);


}
int main()
{
    int num,b[3];
    printf("Enter the degree of first polynomial:");
    scanf("%d",&num);
    int a[num+1];
    for(int i=num;i>=0;i--)
    {
        printf("Enter the value of a%u:",i);
        scanf("%d",&a[i]);
    }
    printf("Second polynomial, of degree 2\n");
    for(int i=2;i>=0;i--)
    {
        printf("Enter the value of b%u:",i);
        scanf("%d",&b[i]);
    }

    reminder(a,b,num);

  return 0;
}
