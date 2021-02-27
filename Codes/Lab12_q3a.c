#include<stdio.h>
#include<math.h>
#include <string.h>

void multiply (void *x,void *y)
{
    *(int*)x= pow(*(int*)x,*(int*)y);
}

void concate(void *x,void *y)
{
   strcat((char*)x,(char*)y);
   
}
void iterateFunction(void (*f)(void*,void*),int d,void *x,void *y)
{
    for(int i=0;i<d;i++)
     (*f)(x,y);
}

int main()
{
    int d,a,b;
    int *X=&a,*Y=&b;
    char x[50], y[10];
   
    printf("Enter d:");
    scanf("%d",&d);
    
    printf("Enter integer x:");
    scanf("%d",&a);
    printf("Enter integer y:");
    scanf("%d",&b);
    printf("Enter string x:");
    scanf("%s",x);
    printf("Enter string y:");
    scanf("%s",y);

    iterateFunction(concate,d,(void*)x,(void*)y);
    iterateFunction(multiply,d,(void*)X,(void*)Y);
    printf("Result with pow function:%d\n",*X);
    printf("Result with strcat function:%s\n",x);

  return 0;
}