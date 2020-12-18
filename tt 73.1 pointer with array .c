///pointer with array

#include<stdio.h>
int main()
{
    int arr[10]={2,4,6,7,9,3,5,1};//r 2 ta 0,0 nibe
    int *p;
    p=&arr; ///arr[0] ar * ar man ak ee;
    ///  p=&arr[5];
    *(p+5)=7;  //arr[5] ar 9 ke  7 kore dibe
    printf("%d %d   %d",*p,*(p+1),arr[5]);
    return 0;
}
