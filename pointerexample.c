#include<stdio.h>
int main()
 { 
 int a = 5 , *p ;
 p = &a;
 printf("\n %d",a);
 printf("\n %u",&a);
 printf("\n %d",*p);
 //printf("%d",p);
 printf("\n %u",&p);
 printf("\n %u",&*p);
 return 0 ;
 }