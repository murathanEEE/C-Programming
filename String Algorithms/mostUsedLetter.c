/*
    Name: Murathan Ulukaya
    Date: 20.02.2023
    Program: Counting the most used letters in a string
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[250];
    char letter;
    int i=0, j;
    int count, max=0;

    printf("Enter a statement: \n");
    gets(string);

    while (string[i])
    {   
        count = 0;
        for (j=1; j<strlen(string); j++)
        {
            if (string[j] == string[i])
            {
                count++;
            }
        }

        if (count > max)
        {
            max = count;
            letter = string[i];
        }
        
        i++;
    }
    
    printf("\nThere are %d '%c' in the statement", max+1,letter);
    printf("\n%c is most used letter in the statement \n", letter);

    return 0;
}