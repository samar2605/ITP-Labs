#include<stdio.h>

int main()
{
    char file1[30],file2[30];
    printf("Enter first file name:");
    scanf("%s",file1);
    printf("Enter second file name:");
    scanf("%s",file2);

    FILE *f1=fopen(file1,"a");
    FILE *f2=fopen(file2,"r");
    if(f1==NULL)
    {
        printf("First file does not open");
        return 1;
    }
    if(f2==NULL)
    {
        printf("Second file does not open");
        return 1;
    }
    char str[200];
    //fseek(f2,19,SEEK_SET);  to learn fseek()
    while(!feof(f2))
    {
        fgets(str,200,f2);
        fprintf(f1,"%s",str);
       // printf("%ld\n",ftell(f2)); to learn ftell()
    }
    fclose(f1);
    fclose(f2);
    printf("Successfully appended\n");
    return 0;
}