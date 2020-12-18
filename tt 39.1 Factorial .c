///ps 02: Factorial computing
///5!=1*2*3*4*5
///s in= 5
///s out= 120
#include<stdio.h>
int main()
{
    long long int fact,i,n;
    while(scanf("%lld",&n)!=EOF)
    {
       fact=1;
       for(i=1;i<=n;i++)
       {
           fact=fact*i;
       }
       printf("%lld\n",fact);
    }
    return 0;
}
