///if else ladder
///two condition can't fullfil .
#include<stdio.h>
int main()
{
    int mark;
    printf("enter the number: \n ");
    scanf("%d",&mark);

    if(mark>100)
          printf("Mark invalid ");
    else if(mark>=80)
          printf("A+");
    else if(mark>=75)
          printf("A");
    else if(mark>=70)
          printf("A-");
    else if(mark>=65)
          printf("B+");
    else if(mark>=60)
          printf("B");
    else if(mark>=0)
          printf("fail");
    else
          printf(" Mark invalid ");
    return 0;
}
