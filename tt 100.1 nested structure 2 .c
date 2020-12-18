
///structures and unions
///nested structure 2
///ak tar vitor arekta structure

#include<stdio.h>

struct birthday
    {
    int day;
    int month;
    int year;
    };
struct Sex
    {
    int male;
    int female;
    };
struct student
{
    char first_name[50];
    char last_name[50];
    struct birthday birth;
    struct Sex sex;
};
struct teacher
{
    char first_name[50];
    char last_name[50];
    struct birthday birth;
    struct Sex sex;

};
int main()
{
    printf("if you are teacher press 1  and if you are student press 2\n");
    printf(" 1. teacher\n 2. student\n");
    int a;
    scanf("%d",&a);
  if(a==1)
    {
    int salary;
    struct teacher user;
    char sexck[50];
    printf("Teacher,enter your first name:");
    scanf("%s",user.first_name);
    printf("enter your last name :");
    scanf("%s",user.last_name);

    printf("ender your birthdate: \n");
    printf("\t day: ");
    scanf("%d",&user.birth.day);
    printf("\t month: ");
    scanf("%d",&user.birth.month);
    printf("\t year: ");
    scanf("%d",&user.birth.year);

    printf("ender your gendar (if male press m else press f ):");
    scanf("%s",sexck);

    if (strcmp(sexck,"m")==0 || strcmp(sexck,"M")==0 ){
        user.sex.male=1;
        user.sex.female=0;
    }
     else if (strcmp(sexck,"f")==0 || strcmp(sexck,"F")==0 ){
        user.sex.male=0;
        user.sex.female=1;
    }
    else{
        printf("other");
       return 0;
    }
printf("enter your salary: ");
scanf("%d",&salary);

    printf("first name : %s\n",user.first_name);
    printf("lase name  : %s\n",user.last_name);

    printf("birthdate  : %d /%d /%d\n",user.birth.day,user.birth.month,user.birth.year);
    printf("sex        : ");
    if(user.sex.male==1)
        printf("male\n");
    else if(user.sex.female==1)
        printf("female\n");
     printf("salary     :%d",salary);

    }
  else if(a==2)
    {
   // int salary;
    struct student user;
    char sexck[50];
    printf(" Student, enter your first name :");
    scanf("%s",user.first_name);
    printf("enter your last name :");
    scanf("%s",user.last_name);

    printf("ender your birthdate: \n");
    printf("\t day: ");
    scanf("%d",&user.birth.day);
    printf("\t month: ");
    scanf("%d",&user.birth.month);
    printf("\t year: ");
    scanf("%d",&user.birth.year);

    printf("ender your gendar (if male press m else press f ):");
    scanf("%s",sexck);

    if (strcmp(sexck,"m")==0 || strcmp(sexck,"M")==0 ){
        user.sex.male=1;
        user.sex.female=0;
    }
     else if (strcmp(sexck,"f")==0 || strcmp(sexck,"F")==0 ){
        user.sex.male=0;
        user.sex.female=1;
    }
    else{
        printf("other");
       return 0;
    }
//printf("enter your salary: ");
//scanf("%d",&salary);

    printf("first name : %s\n",user.first_name);
    printf("lase name  : %s\n",user.last_name);

    printf("birthdate  : %d /%d /%d\n",user.birth.day,user.birth.month,user.birth.year);
    printf("sex        : ");
    if(user.sex.male==1)
        printf("male\n");
    else if(user.sex.female==1)
        printf("female\n");
   //  printf("salary    :%d",salary);
    }
    return 0;
}








