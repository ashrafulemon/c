///print 3 number
///1234 5678
///123  567
/// birth day

 #include<stdio.h>
 int main()
 {
     int a,b,i ;
     printf("inter your  number ");
     scanf("%3d",&a);
     printf("%d \n",a);
     scanf("%d",&a);
  //   printf("inter your  number");
     scanf("%3d",&a);
     printf("%d\n",a);
     scanf("%d",&a);

     printf("inter your  number ");
     scanf("%3d%d%3d%d",&a,&i,&b,&i);
     printf("%d %d \n",a,b);
     scanf("%3d%*d%3d%*d",&a,&b);
     printf("%d %d \n",a,b);

     int day,month,year;
     printf("day,month,year\n");
     scanf("%d-%d-%d",&day,&month,&year);
     printf("%d-%d-%d",day,month,year);

    return 0;
 }
