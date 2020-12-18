///all loop advance
#include<stdio.h>
int main()

{   ///way 1
    int a,i;
    for(i=1 ;i<=3 ;i++)
    {
     scanf("%d",&a);
     printf("%d\n\n",a);
    }
    printf("ok done \n ");

   ///way 2
    i=1;
    while(i<=4)
    {
        scanf("%d",&a);
        printf("%d \n",a);
        i++;
    }
    printf("done");
    return 0;
}
