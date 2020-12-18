///loop ex 2
///take n integer as input and print their sum
///input  :5
///output : (1,2,3,4,5) 15

#include<stdio.h>
int main()
{
    int n,i,sum;
    sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
        printf("%d ",i);
        sum=sum+i;
       }
       printf("\n %d",sum);
   return 0;
}

