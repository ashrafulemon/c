///string function strlen strcpy strcat strcmp
///strcat

#include<stdio.h>
#include<string.h>
int main()
{
    int ln;
    char s[15],s1[15];
    scanf("%s",s);
    scanf("%s",s1);
   /// strcat(s," ");  //spach ar jonno
    strcat(s,s1);
    printf("%s",s);
    return 0;
}
