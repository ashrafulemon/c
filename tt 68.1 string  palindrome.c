/// chack a string is palindrome or nots .
///sample input ; madam
///sample output ; palindrome

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int ln,i,j;
    while (scanf("%s",str)!=EOF)
    {
        ln= strlen(str);
        j=0;
        for (i=ln-1;i>=0;i--)   ///ln-1 hoise 0 theke count korar jonno
        {
            rev[j]=str[i];
            j++;
        }
        rev[j]='\0';
        if (strcmp(str,rev)==0)
            printf("palindrome\n");
        else
            printf("not palindrome\n");
    }
    return 0;
}
