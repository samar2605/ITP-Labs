#include<stdio.h>

void print(char mat[4][4])
{
    for(unsigned i=0;i<4;i++)
    {
        printf("\n");
        for(unsigned j=0;j<4;j++)
        {
            if(mat[i][j]=='0')
                printf("  ");
            else
                printf("%c ",mat[i][j]);
        }
    }
}

void N(char mat[4][4])
{


}

int main()
{
    char mat[4][4],ch='a';
    scanf("%c",&mat[0][4]);
    /*for(unsigned i=0;i<4;i++)
    {
        for(unsigned j=0;j<4;j++)
        {
            //printf("Enter Entry mat[%d][%d]",i,j);
            scanf("%c",&mat[i][j]);
        }
    }
    */
    while(ch!='X'&&ch!='x')
    {
         print(mat);
         scanf("%c",&ch);
    }
   return 0;
}
