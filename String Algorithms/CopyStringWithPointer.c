/*
    Name: Murathan Ulukaya
    Date: 21.02.2023
    Program: Copy a string to another with pointers 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_string(char string1[15], char *ptr1)
{
    char string2[15];
    char *ptr2;

    ptr2 = string2;

    for (ptr1=string1; *ptr1; ptr1++)
    {
        *ptr2 = *ptr1;
        ptr2++;
    }

    printf("Copied string: \n%s", string2);
    
}

int main()
{
    char string[15];
    char *p;

    printf("Enter a string: \n");
    gets(string);

    copy_string(string, p);

    return 0;
}
