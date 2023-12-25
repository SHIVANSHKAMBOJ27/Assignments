//Write a program that uses two functions to swap two numbers
// a) Using a third variable 

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("input a & b : ");
    scanf("%d %d",&a ,&b);
    c=a;
    a=b;
    b=c;
    printf(" a = %d",a);
    printf(" b = %d",b);
}


// b) Without Using a third variable 

#include<stdio.h>
int main()
{
    int a,b;
    printf("input a & b : ");
    scanf("%d %d",&a ,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" a = %d",a);
    printf(" b = %d",b);
}


