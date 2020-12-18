///password
#include<conio.h>
#include<stdio.h>
#define getch() _getch()
void pass_gen(char pass[])
{
    int i=0;
    char ch;

    while(1)
    {
       ch = _getch();
       if(ch==13)  ///13 holo new line ar asking charter
          break;
       putchar('*');
       pass[i++]=ch;
    }
    pass[i]='\0';
}
int main()
{
    char password[50];
    pass_gen(password);
    printf ("\n%s",password);

    return 0;
}
