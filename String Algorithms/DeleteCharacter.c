/*
    Name: Murathan Ulukaya
    Date: 21.02.2023
    Program: To delete a character that user want to in a string with pointers 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delete_char(char string1[100], char *ptr, char letter1)
{
    for (ptr = string1; *ptr; ptr++)
    {
        if (*ptr == letter1)
        {
            strcpy(ptr, ptr+1);
        }

    }
    
    printf("Updated statement: \n%s", string1);
    
}

int main()
{
    char string[100], letter;
    char *p;

    printf("Enter a statement: \n");
    gets(string);

    printf("Enter a letter that you want to delete from the string: \n");
    scanf("%c", &letter);

    delete_char(string, p, letter);

    return 0;
}
