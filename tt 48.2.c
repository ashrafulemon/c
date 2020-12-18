
///bubble sort
///maner urdho krom
///1 8 3 6 2
/// 1 2 3 6 8
#include<stdio.h>
int main()
{
    int i=0,j,n=5,temp,k;
    int arr[5]={1,8,3,6,2};

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
            for(k=0;k<n;k++)
            printf("%d",arr[k]);
            printf("=\n");
        }
        printf("==\n");
      //  printf("%d",arr[i]);
    }

    return 0;
}
