///string output a closer look of printf,puts
///puts
 #include<stdio.h>
 int main()
 {
     char str[100];
     int w=8,q=3;
     gets(str);
     puts(str);
    printf("%8.3s\n",str);
    printf("%*.*s\n",8,3,str);
    printf("%*.*s",w,q,str);
     return 0;
 }
