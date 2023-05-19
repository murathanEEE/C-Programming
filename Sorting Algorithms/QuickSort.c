#include <stdio.h>
#include <stdlib.h>

// It is an algorithm for sorting the numbers in an array from smallest to largest

void quickSort(int numbers2[100], int first, int last)
{
    int temp, pivot;
    int i,j;

    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (numbers2[i] <= numbers2[pivot] && i < last)
            {
                i++;
            }
            while (numbers2[j] > numbers2[pivot])
            {
                j--;
            }
            if (i<j)
            {
                temp = numbers2[i];
                numbers2[i] = numbers2[j];
                numbers2[j] = temp;
            }
        }

        temp = numbers2[pivot];
        numbers2[pivot] = numbers2[j];
        numbers2[j] = temp;

        quickSort(numbers2,first, last-1);
        quickSort(numbers2,j+1,last);
        
    }  
}


int main()
{
    int n;

    printf("Enter the number of values that will be sort:\n");
    scanf("%d", &n);

    int i,j;
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

    // quick sort
    quickSort(numbers,0,n-1);

    printf("\nSeries after sorting:\n");
    for (j=0; j<n; j++)
    {
        printf("%d ", numbers[j]);
    }
    
    return 0;
}
