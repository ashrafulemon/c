///string basic input output

#include<stdio.h>
int main()
{
    char ch[100]= "hust dinajpur";
   // int i=0;
    printf("%s",ch);
    printf("\n%c\n",ch[5]);
    ch[4]='\0';
     printf("%s",ch);
    return 0;
}
