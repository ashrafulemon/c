///pointer with array

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="hust";
    char str1[100]="dinajpur";
    char *p;
    ///strcpy(str,str1);
    strcpy(str,str1+5);
    p=strcpy(str,str1+5);
    printf("%s  %s  \n",str,p);
    printf("%d  %d  \n",str,p);
    /// printf("%s",p);
    return 0;

}
