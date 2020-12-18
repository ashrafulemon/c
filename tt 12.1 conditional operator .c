///conditional Operator
///true  :  false
/// largest one

#include<stdio.h>
int main()
{
    int a,b,c;
    a=15,b=10;
    (a>b)? printf("%d",a):printf("%d",b);

    c=(a<b)? a:b;                 ///smaller one
    printf("\n %d",c);

    return 0;
}
