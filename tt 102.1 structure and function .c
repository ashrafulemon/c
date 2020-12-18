///structures and unions
///structure and function

#include<stdio.h>

struct mystructure{
    int x;
    float y;
};

void print(struct mystructure pr)
{
    printf("x=%d\n",pr.x);
    printf("y=%f\n",pr.y);
}
int main()
{
    struct mystructure mem,mem1;
    mem.x=5;
    mem.y=8.8;
    printf("before assign\n");
    printf("mem\n");
    print(mem);
    printf("mem1\n");
    print(mem1);
    mem1=mem;
    printf("after assign\n");
    printf("mem\n");
    print(mem);
    printf("mem1\n");
    print(mem1);

    return 0;
}
