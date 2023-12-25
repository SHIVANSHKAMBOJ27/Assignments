//Sum of Natural Numbers: Given a positive integer n, write a program to calculate and return the sum of natural numbers up to n using loops. 

#include <stdio.h>
int sumOfNaturalNumber(int n) 
{
    int sum = 0;

    for (int i = 1; i <= n; i++) 
    {
        sum += i;
    }

    return sum;
}

int main() 
{
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0)
     {
        printf("Please enter a positive integer\n");
        return 1; 
    int result = sumOfNaturalNumber(n);
    printf("Sum of natural numbers up to %d is: %d\n", n, result);

    return 0;
}
}


