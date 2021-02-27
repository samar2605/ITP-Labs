#include<stdio.h>
#include<stdlib.h>

struct vector{
                double *v;
                unsigned d;
             };

void initialize_vector(struct vector *var, unsigned d,double a)
{
    (*var).v=malloc(d*sizeof(double));
    
    if((*var).v==NULL)
    {
        printf("Memory not allocated");
        return;
    }
  
    for(unsigned i=0;i<d;i++)
    {
        (*var).v[i]=a;        
    }
  return ;
} 
int main()
{
    struct vector var;
    double a;
    printf("Enter the value of d:");
    scanf("%u",&var.d);
    
    printf("Enter the value of a:");
    scanf("%lf",&a);
        
    initialize_vector(&var,var.d,a);
    for(unsigned i=0;i<var.d;i++)
    {
        printf("%lf ",var.v[i]);

    }

  return 0;
}