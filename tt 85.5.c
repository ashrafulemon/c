///with recurtion

#include<stdio.h>

long long uva100(long long n)
{
    printf(" %lld ",n);
    if (n==1)
    {
    return 1;
    }
    else if (n&1)
    {
    return uva100(3*n+1) +1 ;
    }
    else
    {
    return uva100(n/2)+ 1;
    }
}

int main()
{
   printf("\n %lld \n", uva100(3));
   return 0;
}


