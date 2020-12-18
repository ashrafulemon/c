///chack prime numbers
///s.in: 5    s.out: prime

#include<stdio.h>
int main()
{
    int chack,a,i;
    scanf("%d",&a);
    if(a==1||a==0)
  { printf("not prime");}
    else
    {
    chack=1;
    for(i=2;i<a;i++)
    {
    if(a%i==0)
    chack=0;
    }
    if(chack==1)
    printf("%d is prime",a);
    else
    printf("not prime");
    }
    return 0;
}
