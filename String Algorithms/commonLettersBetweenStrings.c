/*
    Name: Murathan Ulukaya
    Date: 31.03.2023
    Program: To determine how many common letters between two strings with pointers 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int common(char stringA[100], char stringB[100], char *ptr1, char *ptr2)
{
    int i,j,k,t;
    int count = 0;
    char keep = ' ';

    ptr1 = stringA;
    ptr2 = stringB;

    if (strlen(stringA) < strlen(stringB))
    {
        for (i=0; i<strlen(stringB); i++)
        {
            for (j=0; j<strlen(stringA); j++)
            {
                if (*ptr2 == *ptr1 && *ptr2 != keep)
                {
                    count++;
                    keep = *ptr2;
                }
                ptr1++;
            }

            ptr2++;
            ptr1 = stringA;   
        }
    }
    else if (strlen(stringA) >= strlen(stringB))
    {
        for (k=0; k<strlen(stringA); k++)
        {
            for (t=0; t<strlen(stringB); t++)
            {
                if (*ptr1 == *ptr2 && *ptr1 != keep)
                {
                    count++;
                    keep = *ptr1;
                }
                ptr2++;
            }

            ptr1++; 
            ptr2 = stringB;  
        }
    }
    
    return count;
}


int main()
{
    char string1[100], string2[100];
    char *p1, *p2;
    int result;
    
    printf("Enter the first string:\n");
    gets(string1);
    printf("Enter the second string:\n");
    gets(string2);

    result = common(string1, string2, p1, p2);

    printf("Common letters numbers between first and second strings: %d", result);

    return 0;
}