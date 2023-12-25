// 14. Dynamic Memory Allocation for 1-D Array: Write a program to allocate memory dynamically for a 1-D array using malloc.

#include <stdio.h>
int main() {
    int *arr;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; 
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of the dynamically allocated array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
