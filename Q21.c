// Pointer Arithmetic: Write a program to illustrate the following basic pointer arithmetic operations.
// a. Increment a pointer
#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr = &num;

    printf("Value before incrementing: %d\n", *ptr);

    ptr++;

    printf("Value after incrementing: %d\n", *ptr);

    return 0;
}

// b. Decrement a Pointer

#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr = &num;

    printf("Value before incrementing: %d\n", *ptr);

    ptr--;

    printf("Value after incrementing: %d\n", *ptr);

    return 0;
}

// c. Add an integer to a pointer

#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    int addValue = 5;

    printf("Value before adding: %d\n", *ptr);

    ptr = ptr + addValue;

    printf("Value after adding: %d\n", *ptr);

    return 0;
}

// d. Subtract an integer from a pointer

#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Value before subtracting: %d\n", *ptr);

    ptr -= 2;

    printf("Value after subtracting: %d\n", *ptr);

    return 0;
}

// e. Subtract two pointers of the same type

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr1 = &arr[2];
    int *ptr2 = &arr[0];

    printf("Value at ptr2: %d\n", *ptr2);

    ptr1 = ptr1 - ptr2;

    printf("Result of subtracting pointers: %ld\n", ptr1);

    return 0;
}


