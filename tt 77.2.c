
///functiom prototype


#include<stdio.h>
int ads(int a,int b);    /// ; dite hobe
int add(int a,int b);

int main()
{
    printf("%d",ads(5,-7));
    return 0;
}
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
    return ad;        /// ad print kore
}

