///structure and unions (sort a structure array)
///id sort
/** class : student 10
    name, student_id,cgpa
    */
#include<stdio.h>
#include<string.h>

struct cse
{
    char name[20];
    int sid;
    double cgpa;
}    ;
void output (struct cse student[])
{
    int i;
    printf(" output  \n");
    for (i=0; i<10; i++)
    {
    printf(" %d %s %.2lf \n",student[i].sid,student[i].name,student[i].cgpa);
    }
}
void input (struct cse student[])
{
    int i;
    printf("$$$$  input  $$$$\n");
    for (i=0; i<10; i++)
    {
    scanf("%s%d%lf",student[i].name,&student[i].sid,&student[i].cgpa);
    }
}
void sidsort(struct cse student[])
{
    int i,j;
    for (i=0;i<9;i++)  ///1 -9 porjonto, 10 j hoi
    {
        for(j=i+1;j<10;j++)
        {
            if((student[i].sid>student[j].sid))
         {
            struct cse temp;
            strcpy(temp.name, student[i].name);
            temp.sid=student[i].sid;
            temp.cgpa= student[i].cgpa;

             strcpy(student[i].name, student[j].name);
            student[i].sid=student[j].sid;
            student[i].cgpa=  student[j].cgpa;

             strcpy(student[j].name, temp.name);
            student[j].sid=temp.sid;
            student[j].cgpa=  temp.cgpa;

         }
        }

    }
}
int main()
{
    struct cse student[10];
    input (student);
    sidsort(student);
    output(student);

    return 0;
}

