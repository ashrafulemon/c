///structures and unions
///nested structure and something interesting
///ak tar vitor arekta structure

///create_account

#include<stdio.h>

struct create_account
{
    char first_name[50];
    char last_name[50];
    char username[50];
    char password[50];

    struct birthday
    {
    int day;
    int month;
    int year;
    }birth;

    struct Sex
    {
    int male;
    int female;
    }sex;
};
int main()
{
    struct create_account user;
    char passck[50];
    char sexck[50];
    printf("enter your first name:");
    scanf("%s",user.first_name);
    printf("enter your last name :");
    scanf("%s",user.last_name);
    printf("enter your username :");
    scanf("%s",user.username);
    printf("enter your password :");
    scanf("%s",user.password);
    printf("repet your password :");
    scanf("%s",passck);

    if(strcmp(user.password,passck)!=0){
    printf("don't match password \n");
    return 0;
    }
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
    printf("first name : %s\n",user.first_name);
    printf("lase name  : %s\n",user.last_name);
    printf("username   : %s\n",user.username);
    printf("passwoed   : %s\n",user.password);
    printf("birthdate  : %d /%d /%d\n",user.birth.day,user.birth.month,user.birth.year);
    printf("sex        : ");
    if(user.sex.male==1)
        printf("male\n");
    else if(user.sex.female==1)
        printf("female\n");

    return 0;
}








