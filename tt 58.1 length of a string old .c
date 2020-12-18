///calculate the length of a string

#include<stdio.h>
int main()
{
    char ch[10]="sharif";
    int ln,i;
    i=0;
    while (ch[i]!='\0')
    {i++;}
    ln=i;
    printf("%d",ln);
    return 0;
}
