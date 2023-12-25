// Sum of Array Elements: Write a program to calculate and return the sum of elements of a 1-D array

#include <stdio.h>
int calculateArraySum(int arr[], int size) 
{
    int sum = 0;

    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }

    return sum;
}

int main() 
{
    
    int array[] = {1, 5, 7, 15, 8, 3, 12};

    int size = sizeof(array) / sizeof(array[0]);

    int sum = calculateArraySum(array, size);
    printf("The sum of elements in the array is: %d\n", sum);

    return 0;
}
