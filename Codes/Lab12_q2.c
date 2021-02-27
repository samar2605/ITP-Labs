#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned m,n;
    double **matrix;
    printf("Enter number of rows:");
    scanf("%u",&m);
    printf("Enter number of columns:");
    scanf("%u",&n);

    *matrix=malloc(m*sizeof(double*));
    for(unsigned i=0;i<m;i++)
        matrix[i]=malloc(n*sizeof(double));
    if(matrix==NULL)
    {
        printf("memory not allocated");
        return 1;
    }
    for(unsigned i=0;i<m;i++)
    { 
        for(unsigned j=0;j<n;j++)
        {    printf("Enter matrix[%u][%u]: ",i,j);
             scanf("%lf",&matrix[i][j]);
        }
    }
    for(unsigned i=0;i<m;i++)
    {
        printf("\n");
        for(unsigned j=0;j<n;j++)
        printf("%lf ",matrix[i][j]);
    }
    return 0;
}