///pointer closer look 2

#include<stdio.h>
int main()
{
    int a,*pa=&a;
    char c,*pc=&c;
    float f,*pf=&f;
    double d,*pd=&d;
    //printf("%p",pa); address print korbe
    printf("%d %d %d %d\n",pa,pc,pf,pd);
    pa++;pc++; pd++; pf++;
    printf("%d %d %d %d",pa,pc,pf,pd);
    return 0;

}
