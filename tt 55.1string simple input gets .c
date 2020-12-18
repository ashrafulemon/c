///string simple input output
///take strings as input and print them , the program will exit when input string is empty
///sample input      sample output
///hust              hust
///dinajpur          dinajpur
///5200              5200
/// \0 = nal charter

#include<stdio.h>
int main()
{
    char ch[100];
    ///while(scanf("%s",ch)!=EOF)
    while (gets(ch))
  {
    if(ch[0]=='\0')
    return 0;
    printf("%s\n",ch);
  }
    return 0;
}
