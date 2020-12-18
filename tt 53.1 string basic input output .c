///string basic input output

#include<stdio.h>
int main()
{
    char ch[10];
    int i=0;
    ch[0]='E';
    ch[1]='m';
    ch[2]='o';
    ch[3]='n';
    ch[4]='\0';
    ch[5]='l';
    ch[6]='o';
 ///scanf("%[^\n]",ch)  > emon is good
 ///scanf("%s",ch)      > emon
    printf("%s",ch);
   /* while(ch[i]!='v'){
        printf("%c",ch[i]);
        i++;
    }*/
    return 0;
}
