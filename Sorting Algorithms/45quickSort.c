#include <stdio.h>
#include <stdlib.h>

// dizideki sayıları küçükten büyüğe sıralamaya yarayan bir algoritmadır

void quickSort(int dizi[100], int first, int last)
{
    int gecici, pivot;
    int i,j;

    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (dizi[i] <= dizi[pivot] && i < last)
            {
                i++;
            }
            while (dizi[j] > dizi[pivot])
            {
                j--;
            }
            if (i<j)
            {
                gecici = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = gecici;
            }
        }

        gecici = dizi[pivot];
        dizi[pivot] = dizi[j];
        dizi[j] = gecici;

        quickSort(dizi,first, last-1);
        quickSort(dizi,j+1,last);
        
    }  
}


int main()
{
    int n;

    printf("Enter the number of values that will be sort:\n");
    scanf("%d", &n);

    int i,j,k,t;
    int konum;
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