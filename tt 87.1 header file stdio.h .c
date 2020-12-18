///function
///header file stdio.h
///printf, scanf, gets, puts, getchar, putchar


#include<stdio.h>
int main()
{
   char str[100];
   gets(str);
   puts(str);
   printf("\n");

   char ch;
   ch= getchar();
   putchar(ch);


    return 0;
}
