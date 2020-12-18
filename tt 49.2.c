///cgpa

#include<stdio.h>
int main()
{
    float cgpa[5];
    int mark[5],mark2[3];
    int array2d[4][4]=
    {
    {78,65,54,87,99},
    {89,78,79,87,87},
    {78,87,67,89,76},
    {76,76,78,67,87},
    {56,67,78,98,88}
    };
    printf("%d\n",array2d[2][0]);
    array2d[2][0]=90;
    printf("%d",array2d[2][0]);
    return 0;
}
