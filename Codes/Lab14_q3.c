#include<stdio.h>
#include<math.h>

double poly(int degree,double n[],double value)
{
    double sum=0;
    int i;
    for(i=0;i<=degree;i++)
    {
        sum=sum+(n[i]*pow(value,i));        
    }
    return sum;
}

int main()
{
    int degree,i;
    printf("Enter the degree of polynomial:");
    scanf("%d",&degree);
    double n[degree+1],a,b;
    for(i=0;i<=degree;i++)
    {
        printf("Enter the value of n%d:",i);
        scanf("%lf",&n[i]);
    }

    printf("Enter the value of a(<b):");
    scanf("%lf",&a);
    printf("Enter the value of b(>a):");
    scanf("%lf",&b);
    double start=a,end=b,mid;
    while((end-start)>0.00001)
    {
        mid=(start+end)/2;
        double func=poly(degree,n,mid);
        printf("f(%lf)=%lf\n",mid,func);
        if(poly(degree,n,a)>0&&poly(degree,n,b)<0)
        {
            if(func>0.00001)
            {
               start=mid;
            }
            else if(func<-0.00001)
            {
                end=mid;
            }
            else 
            {
                printf("The root is %.2lf\n",mid);
                printf("Success\n");
                return 0;
            }
        }
        else if(poly(degree,n,a)<0&&poly(degree,n,b)>0)
        {
            if(func<0.00001)
            {
               start=mid;
            }
            else if(func>-0.00001)
            {
                end=mid;
            }
            else 
            {
                printf("The root is %.2lf\n",mid);
                printf("Success\n");
                return 0;
            }
        }
        else 
        {
            printf("f(a)f(b)>0 so the precondition does not satisfy\n");
            return 1;
        }        
    }

    if((end-start)<=0.00001)
    {
        printf("The root is approximately %.2lf\n",start);
    }
    printf("Success\n");    
  return 0;
}