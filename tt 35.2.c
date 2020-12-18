///loop example 01.02
///print all integer between m&n in ascending order
///input    10   6
///output   6 7 8 9 10
#include<stdio.h>
int main()
{
    int i,a,b,tt;
    scanf("%d%d",&a,&b);
    if(b<a)
    {
        tt=a;
        a=b;
        b=tt;
    }
    for(i=a;a<=b;a++)
    {
        printf("%d ",a);
    }
    return 0;
}
