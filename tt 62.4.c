///string function strlen strcpy strcat strcmp
///strcmp

#include<stdio.h>
#include<string.h>
int main()
{
    int ck;
    char s[15],s1[15];
    scanf("%s",s);
    scanf("%s",s1);

    ck=strcmp(s,s1);  ///ak e hole 0 ase, vinnno hole 1,2,3,...

    if(ck==0)
    printf("same");
    else
    printf("not same");
    return 0;
}
