/// function basic
///return value and functiom prototype
///76.2
/// akta function akta man return kore

#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}

int ads(int a,int b)
{
    int ad=add(a,b);
    if (ad<0)
        return -ad;
    else
    return ad;
}
int main()
{
    printf("%d",ads(5,-7));
    return 0;
}
