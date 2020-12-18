///two dimensional array input outpot
///table type.
/*4 5 6 7 8
  1 3 5 7 8
  1 4 7 0 9
  1 5 7 8 0
  6 5 3 2 6
  =1  */
#include<stdio.h>
int main()
{
    int a[5][5] ; ///mane 5 ta but soro hoi 0 theke 4 porjonto
    int i,j;
    for(j=0;j<5;j++){
      for (i=0;i<5;i++){
        scanf("%d",&a[j][i]);
      }
    printf("\n");
    }
    printf("%d",a[3][0]);
    return 0;
}
