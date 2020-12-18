///Array traversing
///
#include<stdio.h>
int main()
{
    int a[10]={2,3,4,1,0,9,8,7,6,5},i;
    for(i=0;i<10;i++)
    {
    printf("%d ",a[i]);
    }
    printf("\n");
    for(i=9;i>=0;i--)
    {
    printf("%d ",a[i]);
    }
    printf("\n %d ",a[5]);
    return 0;
}
