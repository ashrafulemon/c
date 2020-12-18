///pointer closer look
#include<stdio.h>
int main()
{
    int x,y;
    int *p,*q;
    p=&x;
    q=&y;
    x=5;
    y=7;
    printf("%d %d %d %d\n",*p,x,*q,y);
    y=8;   /// p,q ar man na
    printf("%d %d %d %d\n",*p,x,*q,y);

    printf("%d %d %d %d\n",*p,x,*q,y);
    *p=*q;
    printf("%d %d %d %d\n",*p,x,*q,y);

    x=5;
    y=7;
    printf("%d %d %d %d\n",*p,x,*q,y);
    p=q;
    printf("%d %d %d %d\n",*p,x,*q,y);

    x=9;
    y=1;
    printf("%d %d %d %d\n",*p,x,*q,y);

    return 0;

}
