#include<stdio.h>

#define SIZE1 50
#define SIZE2 20

unsigned strlength(const char* str)
{
    unsigned i;
    for(i=0;str[i]!='\0'&&str[i]!='\n';i++);
    return i;
}

void strcate(char* str1,const char* str2)
{
    unsigned size1=strlength(str1),size2=strlength(str2);
    unsigned size=size1;

    for(unsigned i=0;i<size2;i++,size++)
    {
        str1[size]=str2[i];
    }
    str1[size]='\0';

}
int main()
{
    char str1[SIZE1],str2[SIZE2];

    printf("Enter the first string:");
    fgets(str1,SIZE1,stdin);
    printf("Enter the second string:");
    fgets(str2,SIZE2,stdin);
    strcate(str1,str2);
    printf("Appended string:%s\n",str1);

   return 0;
}
