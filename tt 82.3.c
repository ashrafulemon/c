///function (array as paramerer)
/// 2 dimention

#include<stdio.h>

 void abc( int arr1 [] [10] )                                             ///prothom braket a na dile kiso hobe na ,but 2nd braket a dite hobe
{
    printf("before in function arr 1     [4][2]=%d \n",arr1 [4][2]);
    arr1 [4][2]=10;
    printf("after in function  arr 1     [4][2]=%d \n",arr1 [4][2]);
}
 int main ()
{
    int arr[5][10];
    arr [4][2]=4;
    printf("before in main function arr  [4][2]=%d \n",arr [4][2]);
    abc(arr);
    printf("after in main function  arr  [4][2]=%d \n",arr [4][2]);

    return 0;
}

