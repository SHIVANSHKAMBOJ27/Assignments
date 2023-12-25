//ind Largest Element in an Array: Write a program that uses for loops to find the largest element in a 1-D array and returns it. 

#include <stdio.h>

int findLargestElement(int arr[], int size)
 {
    int largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    
    int array[] = {10, 5, 7, 15, 8, 3, 12};

    int size = sizeof(array) / sizeof(array[0]);

    int largestElement = findLargestElement(array, size);
    printf("The largest element in the array is: %d\n", largestElement);

    return 0;
}
