///with recurtion

#include<stdio.h>

void uva100(long long n)
{
    printf(" %lld",n);
    if (n==1)
    {
        return 1;
    }
    else if (n&1)
    {
        uva100(3*n+1);
    }
    else
    {
        uva100(n/2);
    }
}
int main()
{
    uva100(22);
    return 0;
}

