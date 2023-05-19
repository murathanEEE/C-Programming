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
    int temp;
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

    // insertion sort
    for (k=1; k<n; k++)
    {
        t=k;
        while (t>0 && numbers[t]<numbers[t-1])  // If we make the sign less than the algorithm sorts the numbers from largest to smallest
        {
            temp = numbers[t];
            numbers[t] = numbers[t-1];
            numbers[t-1] = temp;
            t--;
        }
        
    }

    printf("\nSeries after sorting:\n");
    for (j=0; j<n; j++)
    {
        printf("%d ", numbers[j]);
    }
    
    return 0;
}
