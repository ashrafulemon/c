///submit problem uva  10071
///sample input 5 5
///sample output 25
#include<stdio.h>
int main()
{
    long int v,t,d;
    while(scanf("%d%d",&v,&t)!=EOF)
    {
        d=2*v*t;
        printf("%d\n",d);
    }
    return 0;
}
