///string input  a closer look of scanf gets

#include<stdio.h>
int main()
{
    char ch[100];

  //  scanf("%[a]",ch);///
   // {printf("%s\n",ch);}
       scanf("%[a-z]",ch);///
    {printf("%s\n",ch);}
   //scanf("%[a-z A-Z 0-9]",ch);///
   // {printf("%s\n",ch);}
     // scanf("%[^a]",ch);///
   // {printf("%s\n",ch);}
     // scanf("%[^\n]",ch);///
  //  {printf("%s\n",ch);}
 /* scanf("%s%*c",ch); ///
   {printf("%s\n",ch);}
     gets(ch); ///
   {printf("%s\n",ch);}
   gets(ch); ///
   {printf("%s\n",ch);}*/
    return 0;
}
