// String Reverse without Library Function: Write a program to reverse a string (array of char) without using string library functions.

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
int main()
{
    char word[40];
    char *rev;
    int i=0;
    int l=0;
    printf("Enter any statement \n");
    scanf("%[^\n]", word);
    while(word[i]!='\0')
    {
        i++;
    }
    // i contains  the length of the string
    rev=(char *)malloc(i*sizeof(char));
    while(i>0)
    {
        rev[l]=word[i];
        i--;
        l++;
    }
    printf("\n %s", rev);
    return 0;
}