#include<iostream>
#include<cstring>

int main()

{      
   char str0[8]={'a','b','c','d','e','f','i','g'};
   char str1[]="abcdefig";
   char str2[]="01234\056789" ;
   char str3[]="abcse\0fgkij";
   printf("strlen(str0)=%d\n",strlen(str0));//11����Ϊû�п��ַ�������ɲ���Ԥ�ڵĴ��� 
   printf("strlen(str1)=%d\n",strlen(str1));//8
   printf("strlen(str2)=%d\n",strlen(str2));//9,\056��һ���ַ� 
   printf("strlen(str3)=%d\n",strlen(str3));//5
}

