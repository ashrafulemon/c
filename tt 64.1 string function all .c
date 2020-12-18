///string function
///strlen,strncpy,strncat,strcmp,strcoll

///strlen(str);
///strcpy(str1,str2);
///strncpy(str1,str2,n);
///strcat(str1,str2);
///strncat(str1,str2,n);
///strcmp(str1,str2);
///strnncmp(str1,str2,n);
///strcoll(str1,str2)

#include<stdio.h>
#include<string.h>
int main()
{
   /// char str[100]="hust";
   ///  printf("%d\n",strlen(str));
   /// printf("%d\n",strlen("hust"));

   char str1[100]="hust";
   char str2[100]="hust";
  /// strcpy(str1,str2);
  /// printf("%s\n",str1);
  /// strncpy(str2,str1,2);
  /// str2[2]='\0';
  /// printf("%s\n",str2);

///  strcat(str2,str1);
///  strncat(str2,str1,5);
 ///   printf("%s\n",str2);

///printf("%d",strcmp(str1,str2)); ///(-1,0,1)
///if(strcmp(str1,str2==0))
///if(!strcmp(str1,str2))///boji nai
///    printf("same");

  ///printf("%d",strncmp(str1,str2,3));
 /// if(!strncmp(str1,str2,3))///boji nai
  /// printf("same");



    printf("%d",strcoll(str1,str2));


    return 0;
}
