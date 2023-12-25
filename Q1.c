// Simple Interest Calculation: Write a program that uses a function to calculate and return simple interest with given principal, rate, and time.

#include <stdio.h>
int main()
{
    int p , r , t , SI ;
    printf("input the principal\n" );
    scanf("%d",&p);
    printf("input the rate\n" );
    scanf("%d",&r);
    printf("input the time\n" );
    scanf("%d",&t);
    SI=(p*r*t)/100;
    printf("the simple interest is : %d\n",SI);
    return 0;
}