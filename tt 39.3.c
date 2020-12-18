///ps 02: Factorial computing 03
///5!=1*2*3*4*5
///s in= 5
///s out= 120
#include<stdio.h>
int main()
{
    int fact,n;
    while(scanf("%d",&n)!=EOF)
    {
       fact=1;
       while(1<=n)
       {
           fact=fact*n;
           n--;
       }
       printf("%d\n",fact);
    }
    return 0;
}
