///function (array as paramerer)

#include<stdio.h>
void abc(int arr1[])
{
    int a=6; ///local variable
    printf("in main function arr 1 [3]=%d \n",arr1[3]);
    printf("local=%d\n",a);
}

int main ()
{
    int arr[5]={1,3,5,7,9};
    int a=5;
     printf("in main function arr  [3]=%d \n",arr[3]);
     abc(arr);    /// arr = int arr 1
     printf("main= %d\n",a);
     return 0;
}
