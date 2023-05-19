#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// It is an algorithm for sorting the numbers in an array from smallest to largest

int main()
{
    int n;

    printf("Enter the number of values that will be sort:\n");
    scanf("%d", &n);

    int i,j,k,t;
    int position, temp;
    int numbers[n];

    srand(time(NULL));
    for (i=0; i<n; i++)
    {
        numbers[i] = rand()%100;
    }

    printf("Series before sorting:\n");
    for (j=0; j<n; j++)
    {
        printf("%d ", numbers[j]);
    }

    // selection sort
    for (k=0; k<n-1; k++)
    {
        position = k;
        for (t=k+1; t<n; t++)
        {
            if (numbers[position] > numbers[t])  // If we make the sign less than the algorithm sorts the numbers from largest to smallest
            {
                position = t;
            }  
        }

        if (position != k)
        {
            temp = numbers[k];
            numbers[k] = numbers[position];
            numbers[position] = temp;
        }   
    }
    
    printf("\nSeries after sorting:\n");
    for (j=0; j<n; j++)
    {
        printf("%d ", numbers[j]);
    }
    
    return 0;
}
