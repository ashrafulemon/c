/// binary search
/// 12 23 30 11
/// 11 12 23 30
/// 30 23 12 11
#include<stdio.h>
int main()
{
    int a[13]={1,3,5,2,4,7,6,8,9,12,13,11,22,0};
    int i,s=0,b=13,mid,key=22;
    do
 {
     mid=(int)((s+b)/2);
     printf("start:%d \tend:%d \tmid:%d \tkey:%d \ta[mid]:%d\n",s,b,mid,key,a[mid]);
     if (a[mid]==key)
     {
     printf("find at %d\n",mid+1);
     break;
     }
     else if(a[mid]>key)
     {
     b=mid-1;
     }
     else
     {
     s=mid+1;
     }
 }
     while(s<=b);
     if(s>b)
     {
         printf("none\n");
         printf("start:%d\t end:%d\t mid:%d\t key:%d\t a[mid]:%d\n ",s,b,mid,key,a[mid]);
     }

return 0;
}
