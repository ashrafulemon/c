///two dimensional array matrix multiplication
/*matrix A
         1       2
         3       4
matrix B
         5       6
         7       8
matrix C
         19      22
         43      50*/
#include<stdio.h>
int main()
{
    int a[2][2]={1,2,3,4};
    int b[2][2]={5,6,7,8};
    int c[2][2];
    int i,j,k,sum,m,n,p;
    m=n=p=2;
    printf("matrix A \n");
    for(i=0;i<m;i++)///r
    {
      for(j=0;j<p;j++)///c
     {
      printf("\t %d",a[i][j]);
     }
    printf("\n");
    }
    printf("matrix B \n");
    for(i=0;i<p;i++){
    for(j=0;j<n;j++){
    printf("\t %d",b[i][j]);
    }
    printf("\n");
    }
    {
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                sum=0;
                for(k=0;k<p;k++){
                    sum=sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                printf ("=%d\n",sum);
            }
        }

    }
    printf("matrix C \n");
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    printf("\t %d",c[i][j]);
    }
    printf("\n");
    }
    return 0;
}
