///pointer

#include<stdio.h>
int main()
{
    int a;
    int *p;    ///first girl
    p = &a;     ///priya
    *p =5;
    printf("%d\t%d\n",a,*p);
    a  =6;
    printf("%d\t%d\n",a,*p);
    return 0;
}
