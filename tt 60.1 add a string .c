///add a string after a string

#include<stdio.h>
int main()
{
    char s[15],s1[15];
    int ln,i;
    scanf("%s%s",s,s1);

    for (ln=0;s[ln]!='\0';ln++); ///0,1,2,3,
    s[ln]=' ' ;                  ///hstu te ln[4]=' ' /4
    ln++;                        ///5
     /// akhane prothom ordhek sehs
    for (i=0;s1[i]!='\0';i++)
    s[ln+i]=s1[i];               ///5+0,.....   //6,7,8,9,..

    s[ln+i]=s1[i];           ///(0-9...) akta akta kore
    printf("%s",s);              ///(0-15)

    return 0;
}

