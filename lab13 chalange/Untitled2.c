#include <stdio.h>
int main()
{

 int m;
    printf("Enter a positive integer: ");
    scanf("%d",&m);
     prime(m);
       return 0;

       }


  void prime(int n){
      int i, flag = 0;

    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
  }

