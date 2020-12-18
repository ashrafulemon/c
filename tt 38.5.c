/// 4
/// 5
/// 1 3 4 5 6
/// 19
/// again
#include<stdio.h>
int main()
{
  int a,sum,n,i,t,j;
  scanf("%d",&t);
  for(j=1;j<=t;j++)
   {
       scanf("%d",&n);
       sum=0;
       for(i=1;i<=n;i++)
      {
       scanf("%d",&a);
       sum=sum+a;
      }
       printf("case #%d = %d\n",j,sum);
    }
  return 0;
}
