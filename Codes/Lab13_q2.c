#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, n;
    char sym[4];
    char name[20];
    double mass;

    FILE *f=fopen("chemicalElements.txt","r");
    printf("Enter the atomic no:");
    scanf("%u",&n);

    if(f==NULL)
    {
        printf("File not open\n");
        return 0;
    }
    
    char z[20],string[100];
    char *flag;
    while(!feof(f))
    {
        fscanf(f,"%s",z);
        num=atoi(z);
        flag=fgets(string,sizeof(string),f);
        if(num==n)
        {
            sscanf(string,"%s %s %lf",sym,name,&mass);
            printf("Atomic number:%d\n",num);
            printf("Symbol: %s\nName: %s\n",sym,name);
            break;
        }
    }
    fclose(f);

  return 0;
}