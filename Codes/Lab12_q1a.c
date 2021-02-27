#include<stdio.h>
#include<stdlib.h>

struct vector{
                double *v;
                unsigned d;
             };
int main()
{
    struct vector var;
    printf("Enter the value of d:");
    scanf("%u",&var.d);
    var.v=malloc(var.d*sizeof(double));
    
    if(var.v==NULL)
    {
        printf("Memory not allocated");
        return 1;
    }
    for(unsigned i=0;i<var.d;i++)
    {
        var.v[i]=i;         //initialise with i
    }

    for(unsigned i=0;i<var.d;i++)
    {
        printf("%lf ",var.v[i]);

    }

  return 0;
}