
///loop ex 2
///take n integer as input and print their sum
///input  :5
///output : (1,2,3,4,5) 15

#include<stdio.h>
int main()
{
    int n,i,sum,a;
    sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
        scanf("%d",&a);
        printf("%d ",a);
        sum=sum+a;
       }
       printf("\n %d",sum);
   return 0;
}
