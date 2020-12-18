///bubble sort
///maner urdho krom
///5>  1 8 3 6 2
///    1 2 3 6 8
#include<stdio.h>
int main()
{
    int i,j,n,temp,k;
    int arr[100];
    while(scanf("%d",&n)!=EOF)
 {
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(i=0;i<=n;i++)
  {
    for(j=i+1;j<n;j++)
   {
    if (arr[i]>arr[j])
    {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
   }
  }
    for(k=0;k<n;k++)
    printf("%d ",arr[k]);
    printf("\n");
 }
    return 0;
}
