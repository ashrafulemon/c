///operators ,   increment, decrement.
#include<stdio.h>
int main()
{   int a,b;
    a=5;
    printf("a =%d \n",a);
    a++;
    printf("a =%d \n",a);
    ++a;
    printf("a =%d \n",a);
    b= a;
    printf("b =%d, a= %d \n",b,a);
    b= a++;                                  /// pore a ar man barbe , b= ager a ar man
    printf("b =%d ,a= %d \n",b,a);
    b= a++;
    printf("b =%d ,a= %d \n",b,a);
    b=++a;                                  /// age a ar man barbe,
    printf("b =%d ,a= %d  \n",b,a);
    b=++a;
    printf("b =%d ,a= %d  \n",b,a);
    return 0;
}
