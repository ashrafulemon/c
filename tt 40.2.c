///fibonacii number
/// 0 1 1 2 3 5 8 13 ....
///sample input : 5   sample output : 3
#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      {
       if (i==n)
       printf("%d",a);
      }
     c=a+b;
     a=b;
     b=c;

    }
    return 0;

}
