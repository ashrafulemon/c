///ps 10 create a function that count the number of a character given in input in a string
///sample input       sample output
///sharif  a             1
///sharof  z             0
/// Super Lopez is the title
#include<stdio.h>
#include<string.h>

int count (char arr[],char ch)
{
    int ln,i,count1=0;
    ln=strlen(arr);
    for (i=0;i<ln;i++)
    {
       if (arr[i]==ch)
           count1++;
    }
    return count1;
}
int main()
{
    printf("%d",count("aaaxx",'x'));

    return 0;
}
