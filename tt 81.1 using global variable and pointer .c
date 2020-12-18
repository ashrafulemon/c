///function (example of using global variable and pointer)
///global variable

#include<stdio.h>

int m,n,o,p;   ///globalvariable
void abc(int a,int b)
{
    m=a+b;
    n=a-b;
    o=a*b;
    p=a/b;
}
int main()
{
    int sum,sub,mult,div;
    int a,b;
    a=6,b=3;
    abc(a,b);
    sum=m; sub=n; mult=o;div=p;
    printf("%d %d %d %d \n",sum,sub,mult,div);

    return 0;

}
