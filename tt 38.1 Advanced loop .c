///Advanced loop
///ctrl z
///add two number in infinity

#include<stdio.h>
int main()
{
    int a,b,sum;
    while(1)// 1 mean infinitu=y
    {
        scanf("%d%d",&a,&b);
        if(a==0 && b==0)
            return 0;
        sum=a+b;
        printf("%d\n",sum);
    }
  return 0;
}
