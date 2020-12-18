///Array basic input output
///nu[i]
///nu[3]  >> nu[0],nu[1],nu[2]

#include<stdio.h>
int main()
{
    int sum,n,i;
    int nm[100];
    sum=0;
    for(i=0;i<4;i++)
    {
    scanf("%d",&nm[i]);
    sum=sum+nm[i];
    }
    printf("%d ",sum);
    return 0;
}
