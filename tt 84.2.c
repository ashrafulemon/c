///1 2 3 4 5 6 7 > 1 thke n porjonto jogful
///koro
#include<stdio.h>

int fact(int n)
{
    if (n==0)
        return 1;
    else
        return n *fact (n-1);  ///fact 4 hoye abar fact theke soro hobe!
}
int main()
{
    printf("%d",fact(5));
    return 0;
}
