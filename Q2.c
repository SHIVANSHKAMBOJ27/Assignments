//Temperature Conversion: Write a program that uses two functions to convert temperature from Celsius to Fahrenheit and vice versa, respectively and return the converted values.

#include <stdio.h>

int main()
 {
    printf("Press 1 for Celsius to Fahrenheit, 2 for Fahrenheit to Celsius\n");
    int choice;
    float c, x, f, y;

    scanf("%d", &choice);

    if (choice == 1)
     {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &c);

        x = (c * 9.0 / 5.0) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", x);
    } 
    else if (choice == 2)
     {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &f);

        y = (f - 32) * 5.0 / 9.0;
        printf("Temperature in Celsius: %.2f\n", y);
    } 
    else {
        printf("Invalid input\n");
    }

    return 0;
}