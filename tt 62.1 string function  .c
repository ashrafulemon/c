///string function strlen strcpy strcat strcmp
///strlen

#include<stdio.h>
#include<string.h>
int main()
{
    int ln;
    char s[15];
    scanf("%s",s);
    ln= strlen(s);
    printf("%d",ln);
    return 0;
}
