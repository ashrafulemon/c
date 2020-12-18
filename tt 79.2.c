///function (extern variable , static variable )
/// static variable

#include<stdio.h>

int count()
{
    static int n= 0; ///sodho akbar ai lain kaj korbe
    n++;
    return n;
}
int main()
{
    printf("%d\n",count());
    printf("%d\n",count());
    printf("%d\n",count());
    printf("%d\n",count());

    return 0;
}

