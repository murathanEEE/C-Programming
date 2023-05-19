/*
    Name: Murathan Ulukaya
    Date: 20.02.2023
    Program: Drawing a butterfly with characters
*/

#include <stdio.h>
#include <stdlib.h>

void butterfly(int row,char character)
{
    int i,j;
    for(j=row;j>0;j--)
    {
        for(i=1;i<=row-j;i++)
        {
            printf(" ");
        }

        for(i=1;i<=2*j-1;i++)
        {
            printf("%c",character);
        }

        printf("\n");
    }

    for(j=1;j<=row;j++)
    {
        for(i=1;i<=row-j;i++)
        {
            printf(" ");
        }

        for(i=1;i<=2*j-1;i++)
        {
            printf("%c",character);
        }

        printf("\n");
    }
}

int main()
{
    int row1;
    char character1;

    printf("Enter a character to make a butterfly: \n");
    scanf("%c",&character1);
    printf("How many rows will be in the butterfly? \n");
    scanf("%d",&row1);

    printf("\n\n");
    butterfly(row1,character1);

    return 0;

    /*
    *********
     *******
      *****
       ***
        *
        *
       ***
      *****
     *******
    *********    
    */
}