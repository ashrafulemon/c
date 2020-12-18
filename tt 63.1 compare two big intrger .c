///compare two big intrger
///strcmp

#include<stdio.h>
#include<string.h>
int main()
{
    char n1[100],n2[100];
    ///unsigned long long a;  scanf("%llu",&a);
    while(scanf("%s%s",n1,n2)!=EOF)
    {
    if(strlen(n1)>strlen(n2))
    printf("a>b");
    else if(strlen(n1)<strlen(n2))
    printf("a<b");
    else if (strcmp(n1,n2)==0)
    printf("a=b");
    else if (strcmp(n1,n2)>0)
    printf("a>b");
    else if (strcmp(n1,n2)<0)
    printf("a<b");
    }
    return 0;
}
