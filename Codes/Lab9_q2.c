#include<stdio.h>

void swap_num(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}


int main()
{
    int  num1,num2;
    printf("Enter number1:");
    scanf("%d",&num1);

    printf("Enter number2:");
    scanf("%d",&num2);
    printf("Before swaping\n");  
    printf("number1: %d number2: %d\n",num1,num2);
    swap_num(&num1,&num2);
    printf("After swaping\n");
    printf("number1: %d number2: %d\n",num1,num2);

    return 0;
}

