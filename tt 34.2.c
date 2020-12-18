///break& continue
///continue mane abar prothom theke soro kora,nice jabe na
#include<stdio.h>
int main()
{
    int i;
    for (i=0;i<5;i++)
    {
        printf("%d\n",i);
        if (i==3)
        continue;
        printf("%d\n",i);
        printf("%d\n",i);
    }
    return 0;
}
