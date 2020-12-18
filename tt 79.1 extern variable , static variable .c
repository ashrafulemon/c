///function (extern variable , static variable )

#include<stdio.h>

int add(int a,int b)
{
    extern int c;    ///global variable use korar jonno
    c=a+b;
    return a+b;
}
int c;  ///global variablel
int main()
{
    printf("%d\n",c);
    add(5,6);
    printf("%d\n",c);
    return 0;
}
