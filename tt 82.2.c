///function (array as paramerer)
///1 dimention
#include<stdio.h>
void abc(int arr1[])
{
    printf("before in function arr 1     [3]=%d \n",arr1[3]);
    arr1[3]=10;
    printf("after in function  arr 1     [3]=%d \n",arr1[3]);
}

int main ()
{
    int arr[5]={1,3,5,7,9};
     printf("before in main function arr  [3]=%d \n",arr[3]);
     abc(arr);    /// arr = int arr 1
     printf("after in main function  arr  [3]=%d \n",arr[3]);

     return 0;
}

