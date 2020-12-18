/// string functions
///strchr,strrchr,strstr
///strchr(str,ch)
///strrchr(str,ch)
///strstr(str1,str2)
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="my name emon";
    int address,base;
    base=(int)(str);
    ///address=(int)strchr(str,'e');///samnerdik theke prothom ta
  ///  address=(int)strrchr(str,'e');///pichonerdik theke prothom ta but count kore prothom theke
   address=(int)strstr(str,"emon");///char khoje
    if(address==0)
   /// if (strstr(str,"abc")==NULL)
        printf("not found\n");
    else
        printf("found at position %d",address-base+1);

    return 0;
}
