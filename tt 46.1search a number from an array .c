///search a number from an array
///using linear search
/// sample input 6          sample output: 2
///              1 5 8 9 3
///              5
#include<stdio.h>
int main()
{
    int array[1000],i,key,n,loc,ck;
    while(scanf("%d",&n)!=EOF)
 {
    for (i=0; i<n; i++)
   {
    scanf("%d",&array[i]);  /// ami jodi 5 dei ====  array[0]=5  hobe
   }
    scanf("%d",&key);
    ck=0;
    for(i=0;i<n;i++)
  {
    if (array[i]==key)
    {
    ck=1;
    loc=i+1;
    if(ck==1)
    printf("%d ",loc);
    //break;
    }
  }
    if(ck==0)
    printf("not found");
    printf("\n");
 }
   return 0;
}
