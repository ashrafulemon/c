///fibonacii number
/// 0 1 1 2 3 5 8 13 ....
///sample input : 20   sample output : 0 1 1 2 3 5 8 13
#include<stdio.h>
int main()
{
    int nn,a=0,b=1,c;
    scanf("%d",&nn);
    while(a<=nn)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
     return 0;

}
