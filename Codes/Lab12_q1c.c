#include<stdio.h>
#include<stdlib.h>

struct vector{
                void *v;
                unsigned d;
             };

enum BasicDataType {CHAR,INT,FLOAT,DOUBLE};

/*To check the correctness of function I have initialised the (*var).v[i] 
in case of char it is 'a'
in case of int it is 1
in case of float it is 1.5
in case of double it is 2.0 */

void memoryAssign(struct vector *var, unsigned d, unsigned t )
{
    switch(t)
    {
        case 0: (*var).v=(char*)malloc(d*sizeof(char));
                if((*var).v==NULL)
                {
                    printf("Memory not allocated");
                    return;
                }
                printf("\nCHAR: ");
                for(unsigned i=0;i<d;i++)
                {
                    *((char*)(*var).v+i)='a';
                    printf("%c ",*((char*)(*var).v+i));
                }
                free((*var).v);
                break;
        
        case 1: (*var).v=(int*)malloc(d*sizeof(int));
                if((*var).v==NULL)
                {
                    printf("Memory not allocated");
                    return;
                }
                printf("\nINT: ");
                for(unsigned i=0;i<d;i++)
                {
                    *((int*)(*var).v+i)=1;
                    printf("%d ",*((int*)(*var).v+i));
                }
                free((*var).v);
                break;
        case 2: (*var).v=(float*)malloc(d*sizeof(float));
                if((*var).v==NULL)
                {
                    printf("Memory not allocated");
                    return;
                }
                printf("\nFLOAT: ");
                for(unsigned i=0;i<d;i++)
                {
                    *((float*)(*var).v+i)=1.5;
                    printf("%f ",*((float*)(*var).v+i));
                }
                free((*var).v);
                break;
        case 3: (*var).v=(double*)malloc(d*sizeof(double));
                if((*var).v==NULL)
                {
                    printf("Memory not allocated");
                    return;
                }     
                printf("\nDOUBLE: ");   
                for(unsigned i=0;i<d;i++)
                {
                    *((double*)(*var).v+i)=2.0;
                    printf("%lf ",*((double*)(*var).v+i));
                }
                free((*var).v);
                break;
                       
    }
    
} 

int main()
{
    struct vector var;
    printf("Enter the value of d:");
    scanf("%u",&var.d);
    memoryAssign(&var, var.d,CHAR);
    memoryAssign(&var, var.d,INT);
    memoryAssign(&var, var.d,FLOAT);
    memoryAssign(&var, var.d,DOUBLE);
  return 0;
}