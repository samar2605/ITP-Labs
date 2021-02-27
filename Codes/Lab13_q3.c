#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("Enter the year(1939-2019):");
    scanf("%d",&num);
    FILE *fp=fopen("academylist-movies.txt","r");
    if(fp==NULL)
    {
        printf("File not found\n");
        return 1;
    }
    int  year;
    char year_ch[5],hyphen[3],string[100];
    char *flag;
    while(!feof(fp))
    {
        fscanf(fp,"%s",year_ch);
        year=atoi(year_ch);
        fscanf(fp,"%s",hyphen);
        flag=fgets(string,sizeof(string),fp);
        if(flag==NULL)
        {
            printf("Nothing found");
        }
        if(year==num)
        {
            printf("Movie name: %s\n",string);
            break;
        }
    }
    fclose(fp);
  return 0;
}