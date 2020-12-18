///string basic input output

#include<stdio.h>
int main()
{
    char ch[100];

    scanf("%s",ch);
    {printf("%s\n",ch);}

    scanf("%[^\n]",ch);
    {printf("%s\n",ch);}

    gets(ch);
   {printf("%s\n",ch);}

    return 0;

}
