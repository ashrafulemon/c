///ps 02: Factorial computing 02
///5!=1*2*3*4*5
///s in= 5
///s out= 120
#include<stdio.h>
int main()
{
    int fact,i,n;
    while(scanf("%d",&n)!=EOF)
    {
       fact=1;
       i=1;
       while(i<=n)
       {
           fact=fact*i;
           i++;
       }
       printf("%d\n",fact);
    }
    return 0;
}

