/*
    Name: Murathan Ulukaya
    Date: 17.02.2023
    Program: To do a characters pyramid by using a word that typed by the user
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[10];
    int i=1, j;

    printf("Enter a word: \n");
    fgets(word, sizeof(word), stdin);

    while (i < strlen(word))
    {
        j=0;
        while (j < i)
        {
            printf("%c ", word[j]);
            j++;
        }
        printf("\n");
        i++;
        
    }
    
    return 0;
}
