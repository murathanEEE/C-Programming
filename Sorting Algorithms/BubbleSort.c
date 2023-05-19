#include <stdio.h>
#include <stdlib.h>

// bubble sort algorithm sorts an array of numbers from smallest to largest

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

    // bubble sort
    for (k=0; k<n-1; k++)
    {
        for (t=0; t<n-1-k; t++)
        {
            if (numbers[t] > numbers[t+1])
            {
                temp = numbers[t];
                numbers[t] = numbers[t+1];
                numbers[t+1] = temp;
            }
        }
    }
    
    printf("\nSeries after sorting:\n");
    for (j=0; j<n; j++)
    {
        printf("%d ", numbers[j]);
    }
    
    return 0;
}
