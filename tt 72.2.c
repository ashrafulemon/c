///pointer look
///arr ar arr[0],ake ee

#include<stdio.h>
int main()
{
    int arr[100];
    int *p;
    scanf("%d",&arr[0]);
    p=&arr;
   /// p=arr;

    printf("%d",*p);
    return 0;
}
