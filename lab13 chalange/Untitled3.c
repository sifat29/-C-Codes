#include<stdio.h>
findprime(a,b);
int main ()
{
    int a,b;
    printf("Enter the numbers between you want to find prime %d\n %d\n");
    scanf("%d%d",&a,&b);
    findprime(a,b);
    return 0;

}
   void findprime(int n,int m)
    int i,j,flag;
    for (i=n;i<=m;i++)
    {
        flag=0;
       for( j=n;j<=i/2;j++)
       {
           if (i%j==0)
           {
               flag=1;

                 break;
           }

       }

       if (flag==0)
    {
        printf("\n%d number is prime ",i);

    }
    }



