#include<stdio.h>
#include <stdlib.h>

void swapFirstInversion(void *num,void *n)
{
    for(int i=0;i<(*(int*)n)-1;i++)
    {
        if(*((double*)num+i)>*((double*)num+i+1))
        {
            double tmp=*((double*)num+i);
            *((double*)num+i)=*((double*)num+i+1);
            *((double*)num+i+1)=tmp;
            break;        
        }
    }    
}

void iterateFunction(void (*f)(void*,void*),int d,void *x,void *y)
{
    for(int i=0;i<d;i++)
     (*f)(x,y);
}

int main()
{
    int n,d;
    printf("Enter no of element in array:");
    scanf("%d",&n);
    double num[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter num[%d]:",i);
        scanf("%lf",&num[i]);
    }
    d=(n*(n-1))/2;
    printf("d:%d\n",d);
    
    iterateFunction(swapFirstInversion,d,num,&n);
    printf("Modified array after calling iterateFunction with swapFirstInversion\n");
    for(int i=0;i<n;i++)
    {
        printf("num[%d]: %lf\n",i,num[i]);
        
    }
    return 0;
}