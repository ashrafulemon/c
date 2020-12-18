///Example 3
///print a shape
///sample input  4
///sample output *
///              **
///              ***
#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
             printf("*");
        }
       printf("\n");
    }
    return 0;
}

