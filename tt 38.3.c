///EOF
///5
/// 1 3 4 5 6
///

#include<stdio.h>
int main()
{
  int a,b,sum,n,i;
  while(scanf("%d",&n)!=EOF)
  {
    sum=0;
    for(i=1;i<=n;i++)
    {
      scanf("%d",&a);
      sum=sum+a;
    }
    printf("%d\n",sum);
  }
  return 0;
}
