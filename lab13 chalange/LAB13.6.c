#include<stdio.h>
int main ()
{
    int i,n,first=0,second=1,fib;
    scanf("%d",&n);
    printf("%d\n%d\n",first,second);
    for (i=1;i<=n;i++)
    {
        fib=first+second;
        printf("%d\n",fib);
        first=second;
        second=fib;
    }
    return 0;
}
