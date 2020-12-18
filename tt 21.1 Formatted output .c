///Formatted output

#include<stdio.h>
int main()
{
    printf("%d\n",123456);
    printf("%5d\n",123456);
    printf("%5d%5d\n",1234,1234);
    printf("%-5d%-5d\n",123456,123456);
    printf("%05d\n",1234);
    printf("%.2f\n",12.0);    ///dosomik dite hobe
    printf("%8.2f\n",123.0);
    printf("%*.*f\n",8,2,123.0);

   return 0;
}
