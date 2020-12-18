///input scanf

#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=5,b=10;

    printf("a=%d and the adress of a is %d \n",a,&a);
    printf("b=%d and the adress of b is %d \n",b,&b);
    printf("c=%d and the adress of c is %d \n",c,&c);

    printf("inter two number \n");
    scanf("%d %d",&c,&d);
    printf("sum= %d",c+d);

    return 0;
}
