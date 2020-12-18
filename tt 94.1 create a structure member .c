
///structures and unions
/// create a structure member

#include<stdio.h>
#include<string.h>
struct cse12
{
    char name [20];  ///potthekta e str member
    int sid;
    double cgpa;
}   ;
int main()
{
    struct cse12 student;
    strcpy(student.name,"emon");
    student.sid= 001;
    student.cgpa = 4.00;

    printf("student name :%s \n",student.name);
    printf("student id   :%d \n",student.sid);
    printf("student cgpa :%.2lf \n",student.cgpa);

    return 0;
}
