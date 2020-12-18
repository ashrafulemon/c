///logial oparator
/// &&  // ||
///gpa 5

#include<stdio.h>
int main()
{
    int math,phy,ck;
    math=5 ,phy=5;

    ck=  math==5  &&  phy==5;
    printf("%d \n",ck);

    ck =  math==5  ||  phy==5;
    printf("%d \n ",ck);

    ck =! (math==5) ;
    printf("%d",ck);

    return 0;
}
