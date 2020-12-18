///copy a string into another string

#include<stdio.h>
int main()
{
    char s[15],s1[15];
    int i=0;
    scanf("%s",s);

  /// for(i=0;s[i]!='\0';i++)
    while (s[i]!='\0')
    {
        s1[i]=s[i];          ///akhane sodho 1 ta man nicche
      /// if(s[i]=='\0')///0,1,2,3...
      /// break;
        i++;
    }
    s1[i]=s[i];            ///akhane sob man aksathe kaj kore
    printf("%s",s1);       ///(0-15...)

    return 0;
}
