///string function strlen strcpy strcat strcmp
///strcpy

#include<stdio.h>
#include<string.h>
int main()
{
    int ln;
    char s[15],s1[15];
    scanf("%s",s);
    strcpy(s1,s);      ///s1 a print korbo, s ke  copy korbo
    printf("%s",s1);
    return 0;
}
