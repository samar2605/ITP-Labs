#include<stdio.h>
#include<string.h>

int main()
{
    char file_name[100];
    printf("Enter filename:");
    scanf("%s",file_name);

    FILE *fp = fopen(file_name,"r");
    if(fp==NULL)
    {
        printf("File does not exist\n");
        return 1;
    }
    char str[200];
    int len=0,line_count=0,start_line[100];
    while(!feof(fp))
    {
        start_line[line_count]=ftell(fp);
        fgets(str,200,fp);
        //len+=strlen(str);
       // printf("%d\n",len);
        //printf("%d\n",start_line[line_count]);
        
        line_count++;
    }

    line_count--;
    int count=line_count;
    rewind(fp);
    while(line_count>=0)
    {
        fseek(fp,start_line[line_count],SEEK_SET);
        fgets(str,200,fp);
        printf("%s",str);
        if(line_count==count)
            printf("\n");
        
        line_count--;
    }
   fclose(fp);
  return 0;
}