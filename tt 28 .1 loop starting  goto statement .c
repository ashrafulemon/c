///loop starting  goto statement
///*****

#include<stdio.h>
int main()
{
    int a=3;
    start:
    ///loop:
    printf("%d ",a);
    a++;
    if(a<7)
        goto start;//loop
    return 0;

}
