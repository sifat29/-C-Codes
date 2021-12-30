#include<stdio.h>
int main()
{
    int row,i,j,k,l=1,m;
    printf("Enter the row number:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
            /*for(m=1;m<=1;m++)
            {
                printf(" ");
            }*/
        }
        printf("\n");
    }
    return 0;
}
