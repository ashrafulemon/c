///simple math
///squer
#include<stdio.h>
int main()
{
     int a,b,sq;
    a=3,b=4;
   // sq=(a+b)^2;
   // printf("sq= %d \n",sq);
    sq=(a+b)*(a+b);
    printf("sq= %d \n",sq);

    sq=a*a + 2*a*b + b*b;
    printf("sq= %d \n",sq);

    sq=(a+b);
    sq = sq*sq;
    printf("sq= %d \n",sq);

    return 0;
}
