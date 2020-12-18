/// toascii, tolower, toupper
///akta theke arektai poriborton kore

#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch,ch1,ch2;
    int ascii;
    ch= getchar();
    ascii=toascii(ch);///asking value ber kore
    printf("%d\n",ascii);

    ch1=tolower(ch);/// ja thakbe lower a niye jabe
    printf("%c %c\n",ch,ch1);

    ch2=toupper(ch);/// ja thakbe upper a niye jabe
    printf("%c %c\n",ch,ch2);

   return 0;

}
