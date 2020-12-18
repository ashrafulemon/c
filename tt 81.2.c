///function (example of using global variable and pointer)
///pointer

#include<stdio.h>

void abc(int a,int b,int *sum,int *sub,int *mult,int *div)
{
    *sum  = a+b;
    *sub  = a-b;
    *mult = a*b;
    *div  = a/b;
}
int main()
{
    int sum,sub,mult,div;
    int a,b;
    a=6,b=3;
    abc(a,b,&sum,&sub,&mult,&div);
    printf("%d %d %d %d \n",sum,sub,mult,div);
    return 0;

}
