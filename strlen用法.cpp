#include<iostream>
#include<cstring>

int main()

{      
   char str0[8]={'a','b','c','d','e','f','i','g'};
   char str1[]="abcdefig";
   char str2[]="01234\056789" ;
   char str3[]="abcse\0fgkij";
   printf("strlen(str0)=%d\n",strlen(str0));//11，因为没有空字符结束造成不可预期的错误 
   printf("strlen(str1)=%d\n",strlen(str1));//8
   printf("strlen(str2)=%d\n",strlen(str2));//9,\056是一个字符 
   printf("strlen(str3)=%d\n",strlen(str3));//5
}

