///pointer closer look

#include<stdio.h>
int main()
{
    int *p,*q;
    int x,y,z;
    p= &x;  ///ar ortho *p ke nirdes kore, sodo p ke na
    x=6;
    y= *p;
    z= *(&x);
    printf("%d %d\n",y,z);
    q=&(*(&x));
    printf("%d %d\n",*q,*p);
    return 0;
}
