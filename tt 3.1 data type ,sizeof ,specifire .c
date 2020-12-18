///data type
#include<stdio.h>
int main()
{
    int a=5;
    float s=6;
    double d=7;
    char f= 's';
    char g ='g';
    printf("=%d\n",a);
    printf("size =%d\n ",sizeof(int));
    printf("size =%d\n ",sizeof(a));

    printf("=%f\n",s);
    printf("size= %d\n ",sizeof(s));

    printf("=%lf\n",d);
    printf("size= %d\n ",sizeof(d));


    printf("=%c\n",f);
    printf("size= %d\n ",sizeof(f));
    printf("=%c\n",g);
    printf("size= %d\n ",sizeof(g));

    return 0;

}

