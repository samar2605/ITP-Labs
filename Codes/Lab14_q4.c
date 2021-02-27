#include<stdio.h>

void selectionSort(int num[],int n)
{
    
    for(int i=0;i<n;i++)
    {   
        int min_index=i,min=num[i],tmp;
        for(int j=i+1;j<n;j++)
        {
            if(min>num[j])
            {
                min=num[j];
                min_index=j;
            } 
        }
        tmp=num[min_index];
        num[min_index]=num[i];
        num[i]=tmp;
    }

}
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d :",i);
        scanf("%d",&arr[i]);
    }

    selectionSort(arr,n);
    printf("Sorted elements\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}