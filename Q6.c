// Basic Array Operations: Write a program to traverse an array and print the odd-indexed elements. 

#include <stdio.h>

int main() {
    
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int size = sizeof(array) / sizeof(array[0]);

    printf("Elements at odd indices: ");
    for (int i = 1; i < size; i += 2) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
