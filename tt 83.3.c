///ln na ber kore
#include<stdio.h>

int count (char arr[],char ch)
{
    int i,count1=0;
    for (i=0;arr[i]!='\0';i++)
    {
    if (arr[i]==ch)
    count1++;
    }
    return count1;
}
int main()
{
    char str [100],c;
    while(scanf("%s%*c%c",str,&c)!=EOF)
    {
    printf("%d\n",count(str,c));
    }

    return 0;
}


