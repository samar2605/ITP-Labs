#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    FILE *fp=fopen("1000CommonWords.txt","r");
    if(fp==NULL)
    {
        printf("File not open\n");
        return 0;
    }

     while(!feof(fp))
     {
         fscanf(fp,"%s",str);
         if(strlen(str)==7)
         {
             printf("%s\n",str);
         }
     }
     fclose(fp);
  return 0;
}