///string function
///strspn(str1,str2);///kotota sonkha mil acche
///strcspn(str1,str2);///kotogolo nei

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="emon";
    char str2[100]="abcdefghijklmnopqrstuvwzyz";
    int len;
    ///len= strspn(str,str2);
    len= strcspn(str,str2);

    printf("%d\n",len);
    return 0;

}
