///string basic difference between char array and string

#include<stdio.h>
int main()
{
    char ch[10];
    int i=0;
    ch[0]='E';
    ch[1]='m';
    ch[2]='o';
    ch[3]='n';
    ch[4]='v';
    ch[5]='l';
    ch[6]='o';
    while(ch[i]!='v'){
        printf("%c",ch[i]);
        i++;
    }
    return 0;
}
