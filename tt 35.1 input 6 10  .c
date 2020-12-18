///loop example 01
///print all integer between m&n in ascending order
///input    6   10
///output   6 7 8 9 10
#include<stdio.h>
int main()
{
    int a=6,b=10;
    int i;
    scanf("%d%d",&a,&b);
    for(i=a; i<=b; i++)
     {
         printf("%d ",i);
     }
   return 0;
}
