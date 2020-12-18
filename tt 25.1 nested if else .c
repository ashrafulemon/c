///nested if else
/// which one is largest
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number : \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("largest one is a : %d",a);
        else
        printf("largest one is c : %d",c);
    }
    else
    {
        if (b>c)
        printf("largest one is b : %d",b);
        else
        printf("largest one is c : %d",c);
    }
    return 0;
}
