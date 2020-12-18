///switch statement
///break
#include<stdio.h>
int main()
{
    int number;
    printf("enter a number 8 to 10 \n");
    scanf("%d",&number);
    switch(number)
    {
    case 10:
    printf("number=%d",number);
    break;
    case 9:
    printf("number=%d",number);
    break;
    case 8:
    printf("number=%d",number);
    break;
    default:
    printf("unknown");
    }
    return 0;
}
