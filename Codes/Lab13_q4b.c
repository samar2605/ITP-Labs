#include<stdio.h>
#include<string.h>

unsigned IsHeterogram(char str[])
{
    unsigned len=strlen(str),flag=0;
    for(unsigned i=1;i<len;i++)
    {
        for(unsigned j=0;j<i;j++)
        {
            if(str[j]==str[i])
                return 1;
        }
    }
    return 0;    
}

int main()
{
    char str[15];
 
    FILE *fp=fopen("12letterWords.txt","r");
    if(fp==NULL)
    {
        printf("File does not exist");
        return 0;
    }
    FILE *fw=fopen("12letter-Hgrams.txt","w");
    while(!feof(fp))
    {
        fscanf(fp,"%s",str);
        if(IsHeterogram(str)==0)
        {
            fprintf(fw,"%s\n",str);        
        }
    }
    fclose(fw);
    fclose(fp);
    printf("Success\n");
  return 0;
}