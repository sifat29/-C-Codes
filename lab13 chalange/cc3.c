#include<stdio.h>
int main()
{
    int row,p=1,i,j,k;
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
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }
    return 0;
}
