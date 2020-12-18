/// compare two string s are same or not

#include<stdio.h>
int main()
{
    char s[15],s1[15];
    int i=0;
    int ck=1;
    scanf("%s%s",s,s1);
    while (s[i]!='\0' || s1[i]!='\0')
 {
    if (s[i]!=s1[i])
    {
    ck=0;
    break;
    }
    i++;
 }
    if(ck==1)
        printf("same\n");
    else
        printf("not same \n");

        return 0;
}
