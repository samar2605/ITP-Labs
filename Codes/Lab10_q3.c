#include<stdio.h>

void swap(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;

}
int main()
{
    unsigned n,count=0,start;
    printf("Enter the number of elements:");
    scanf("%u",&n);
    int arr[n];
    printf("Enter numbers:");
    for(unsigned i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(unsigned i=n-1;i>0;i--)
    {
       if(arr[i-1]<arr[i])
       {
           if(arr[i-1]<arr[n-1])
            swap(&arr[i-1],&arr[n-1]);
           else
             swap(&arr[i-1],&arr[i]);
           count=1;
           start=i;
           break;
       }

    }

    if(count==1)
    {
        for(unsigned i=0;i<n-start-1;i++)
           {
               for(unsigned j=start;j<n-i-1;j++)
               if(arr[j]>arr[j+1])
               {
                    swap(&arr[j],&arr[j+1]);

                }
            }
    }

    printf("Next sequence:\n");
    for(unsigned i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
 return 0;
}
