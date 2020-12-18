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
struct mystructure add(struct mystructure a, struct mystructure b)
{
    struct mystructure result;
    result.x=a.x+ b.x;
    result.y=a.y+ b.y;
    return result;
};
int main()
{
    struct mystructure mem,mem1,sum;
    mem.x=5;
    mem.y=8.2;
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

    sum =add(mem1,mem);
    printf("sum\n");
    print(sum);

    return 0;
}

