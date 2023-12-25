// Calculate Factorial using Loops: Write a program to calculate the factorial of a number using a for loop and return its value.

#include<stdio.h>
int main()
{
    int i,num,a;
    printf("enter the no. : ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
      a *= i;
    }   
    printf("the factorial is : %d\n",i);
    return 0;
}