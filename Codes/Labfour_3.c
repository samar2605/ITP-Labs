#include<stdio.h>
#include<math.h>

double fact(int n)   //to find the factorial of a number
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    double fact(int n);
    double x,expo_x=0,sin_x=0,log_x=0;
    printf("Enter a number:");
    scanf("%lf",&x);

    for(int i=0;i<50;i++)
    {
      expo_x+=pow(x,i)/fact(i);
      sin_x+=(pow(-1,i)*pow(x,(2*i+1)))/fact(2*i+1);
     if(x>1)
      log_x+=(pow(-1,i)*pow((1/x)-1,i+1))/(i+1);
     else
       log_x+=(pow(-1,i)*pow(x-1,i+1))/(i+1);

    }
    printf("calculated e^x= %lf\n",expo_x);
    printf("From math.h e^x= %lf\n",exp(x));
    printf("calculated sinx= %lf\n",sin_x);
    printf("From math.h sinx= %lf\n",sin(x));
    if(x>1)
    printf("calculated logx= %lf\n",(-1)*log_x);
    else
     printf("calculated logx= %lf\n",log_x);

    printf("From math.h logx= %lf\n",log(x));

    return 0;
}
