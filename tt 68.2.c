/// chack a string is palindrome or nots .
///sample input ; madam
///sample output ; palindrome

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int ln,i,j,ck,half;
    while (scanf("%s",str)!=EOF)
    {
        ln= strlen(str);
        half=ln/2;
        ln= ln-1;    /// 1 theke hisab kore but amar 0 theke lagbe tahi 1  biyog
        ck=1;
        for(i=0;i<half;i++)
        {
            if (str[i]!=str[ln-i])
            {
            ck=0;
            break;
            }
        }

        if (ck==1)
        printf("palindrome\n");
        else
        printf("not palindrome\n");
    }
    return 0;
}

