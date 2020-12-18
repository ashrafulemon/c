/// structures and union
/// use of sizeof and structure memory

#include<stdio.h>

struct mystructure{
        int a;
        float b;
        double c;
        char e;
        char h;

};

int main()
{
    struct mystructure obj;
    printf("%d",sizeof(obj));

    return  0;
}
