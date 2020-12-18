/// function Header file ctype.h

///isprint,ispunct,isspace,iscntrl,
///isalnum ,isalpha ,isdigit islower,isupper
/// toascii, tolower, toupper

///isprint, iscntrl
# include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    ch= getchar();
    if(isprint(ch))  ///word kye ki na nirdes kore
    printf("yes,leter kye\n");
    else
    puts("no,its a tap kye\n");

    char ch1;
    ch1= getchar();
    if(iscntrl(ch1))  ///tab  kye ki na nirdes kore
    printf("yes,tab kye\n");
    else
    puts("no,its a leter kye\n");

    char ch2;
    ch2= getchar();
    if(ispunct(ch2))  ///puncual chinho  ki na nirdes kore
    printf("yes,ph kye\n");
    else
    puts("no,its no ph kye\n");

    char ch3;
    ch3= getchar();
    if(isspace(ch3))  ///space kye ki na nirdes kore
    printf("yes,sp kye\n");
    else
    puts("no,its not sp kye\n");

    char ch4;
    ch4= getchar();
    if(isalnum(ch4))  ///word/number kye ki na nirdes kore
    printf("yes,ap kye\n");
    else
    puts("no,its not ap tap kye\n");

    char ch5;
    ch5= getchar();
    if(isalpha(ch5))  ///a-z kye ki na nirdes kore
    printf("yes,a-z kye\n");
    else
    puts("no,its not a-z kye\n");

    char ch6;
    ch6= getchar();
    if(isdigit(ch6))  ///0-9 kye ki na nirdes kore
    printf("yes,0-9 kye\n");
    else
    puts("no,its not 0-9 kye\n");

    char ch7;
    ch7= getchar();
    if(islower(ch7))  ///a-z kye ki na nirdes kore
    printf("yes,lower kye\n");
    else
    puts("no,its not lower kye\n");

    char ch8;
    ch8= getchar();
    if(isupper(ch8))  ///A-Z kye ki na nirdes kore
    printf("yes, upper  kye\n");
    else
    puts("no,its not upper kye\n");




    return 0;
}
