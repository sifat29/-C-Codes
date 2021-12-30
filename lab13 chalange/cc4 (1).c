#include<stdio.h>
void prime(int x,int y)
{
    int i,j,flag;
    for(i=x;i<=y;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i!=j && i%j==0)
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int p,q;
    printf("Enter the value of x and y:");
    scanf("%d%d",&p,&q);
    prime(p,q);
    return 0;
}
