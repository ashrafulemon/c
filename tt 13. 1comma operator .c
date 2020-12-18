///comma operator
/// ( ,  ,  ,  )
#include<stdio.h>
int main()
{
    int a,b, cma;
    cma = (a=5,b=10,a+b);
    printf("%d",cma);

    return 0;

}
