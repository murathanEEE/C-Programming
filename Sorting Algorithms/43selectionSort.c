#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// dizideki sayıları küçükten büyüğe sıralamaya yarayan bir algoritmadır

int main()
{
    int n;

    printf("Enter the number of values that will be sort:\n");
    scanf("%d", &n);

    int i,j,k,t;
    int konum, gecici;
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
        konum = k;
        for (t=k+1; t<n; t++)
        {
            if (numbers[konum] > numbers[t])  // işareti küçüktür yaparsak algoritma sayıları büyükten küçüğe doğru sıralar
            {
                konum = t;
            }  
        }

        if (konum != k)
        {
            gecici = numbers[k];
            numbers[k] = numbers[konum];
            numbers[konum] = gecici;
        }   
    }
    
    printf("\nSeries after sorting:\n");
    for (j=0; j<n; j++)
    {
        printf("%d ", numbers[j]);
    }
    
    return 0;
}