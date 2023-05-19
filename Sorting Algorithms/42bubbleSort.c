#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// bubble sort algoritması bir dizi sayıyı küçükten büyüğe sıralamayı yapar

int main()
{
    int n;

    printf("Enter the number of values that will be sort:\n");
    scanf("%d", &n);

    int i,j,k,t;
    int gecici;
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
                gecici = numbers[t];
                numbers[t] = numbers[t+1];
                numbers[t+1] = gecici;
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