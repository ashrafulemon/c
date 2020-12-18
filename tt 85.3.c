

#include<stdio.h>

int main()
{
    long long n;
    n=22;
    int count=0;
    while (1)
    {
        count++;
        printf(" %lld",n);
        if(n==1)
            break;
        if(n&1)
            n=3*n+1;
        else
            n=n/2;
    }
    printf("\n = %d",count);

    return 0;
}

