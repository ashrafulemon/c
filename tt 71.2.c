///pointer closer look 2

#include<stdio.h>
int main()
{
  int a=5,*p=&a;

  printf("%d %d %d\n",a,*p,p);
  ///*p++  ///tahole *par address print korbe
  (*p)++ ;
  printf("%d %d %d\n",a,*p,p);

  return 0;
}
