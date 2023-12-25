// String Handling using Library Functions:
// a) Palindrome Check for a String: Write a program to check if a string is a palindrome or not.

#include <stdio.h>
#include <string.h>

int main() 
{
    char string1[20];
    int i, length;
    int flag = 0;

    printf("Enter a string: ");
    scanf("%s", string1);

    length = strlen(string1);

    for (i = 0; i < length / 2; i++) 
    {
        if (string1[i] != string1[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("%s is not a palindrome\n", string1);
    } else {
        printf("%s is a palindrome\n", string1);
    }

    return 0;
}


// b) String Length Calculation Using Functions: Write a program to calculate the length of a string using a library functions / predefined operators.

#include<stdio.h>
#include<string.h>
int main()
{
   int len;
   char a[100];
   printf("\nEnter the String:");
   gets(a);
   len=strlen(a);
   printf("\nstring length:%d",len);
   return 0;
}

// c) String Concatenation: Write a program to concatenate two strings using library functions.

#include <stdio.h>
int main() {
  char s1[100] = "My Name Is ", s2[] = "SHIVANSH KAMBOJ";
  int length, j;

  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}