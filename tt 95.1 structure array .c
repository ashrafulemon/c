/// create a structure array
/*
a 2 2
b 3 3
c 2 2
b 2 3
a 2 2
b 3 3
c 2 2
b 2 3
q 2 3
w 2 4
*/

#include<stdio.h>
#include<string.h>
struct cse12
{
    char name [20];  ///potthekta e str member
    int sid;
    double cgpa;
}   ;

void print(struct cse12 student[])
{
    int i;
    for (i=0;i<10;i++){
    printf("studint name  :%s \n",student[i].name);
    printf("studint id    :%d \n",student[i].sid);
    printf("studint cgpa  :%.2lf\n",student[i].cgpa);
    }
}
int main()
{
    struct cse12 student[10];
    int i;
    for (i=0;i<10;i++){
        scanf("%s %d %lf",student[i].name,&student[i].sid,&student[i].cgpa);
    }
    print(student);
    return 0;
}
