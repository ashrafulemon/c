///function (use of pointer )

#include<stdio.h>
void inc (int *a)       ///int *a = &a = 5
{
    (*a)++;
}
int main()
{
    int a=5;
    printf("before incriment : %d \n",a);
    inc(&a);
    printf("before incriment : %d \n",a);
    printf("before incriment : %d \n",a);
    return 0;
}
