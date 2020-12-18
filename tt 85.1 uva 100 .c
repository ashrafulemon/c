input 22
output :  22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

#include<stdio.h>

int main()
{
    long long n;
    n=22;
    while (1)
    {
        printf(" %lld",n);
        if(n==1)
            break;
        if(n&1)
            n=3*n+1;
        else
            n=n/2;
    }
    return 0;
}

