//Check Even or Odd Number: Write a program that takes n as user input and determines if it is even or odd. 

#include<stdio.h>
int main()
{
    printf("enter the no. : ");
    int i;
    scanf("%d",&i);
    if((i%2)==0)
    {
        printf("the no. is even");
    }
    else
    {
        printf("the no. is odd");
    }
}