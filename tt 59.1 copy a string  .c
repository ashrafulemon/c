///copy a string into another string

#include<stdio.h>
int main()
{
    char s[15],s1[15];
    int i=0;
    scanf("%s",s);

    while (1)
    {
        s1[i]=s[i];
        if(s[i]=='\0')
        break;
       // else if(s[i]=='0')
        //    s1[i]='n';
        i++;
    }
    printf("%s",s1);

    return 0;
}
