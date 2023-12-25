// Recursive Function for Fibonacci Series: Write a program to generate the Fibonacci series up to n terms using recursion.
// eg: 0,1,1,2,3,5,8,13,21,34....

#include<stdio.h>
int seri(int);
void main()
{
    int n;
    n=5;
    for(n=0;n<5;n++)
    {
    printf("term is %d",seri(n));
    }
}
int seri(int n)
{
    if(n<2)
    return n;
    else 
    return seri(n-1)+seri(n-2);
}
