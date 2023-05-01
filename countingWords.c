/*
    Name: Murathan Ulukaya
    Date: 16.02.2023
    Program: Counting words in a statement that typed by user
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char statement[100];
    int i, word;

    printf("Enter a statement: \n");
    fgets(statement, sizeof(statement), stdin);

    i = 0;
    word = 0;
    while (statement[i])
    {
        if (statement[i] == 32 || statement[i] == 44 || statement[i] == 58 || statement[i] == 59){
            word++;
        }
        i++;
    }

    printf("There are %d words in the statement \n", word+1);

    return 0;
    
}