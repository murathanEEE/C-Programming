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

    // insertion sort
    for (k=1; k<n; k++)
    {
        t=k;
        while (t>0 && numbers[t]<numbers[t-1])  // işareti küçüktür yaparsak algoritma sayıları büyükten küçüğe doğru sıralar
        {
            gecici = numbers[t];
            numbers[t] = numbers[t-1];
            numbers[t-1] = gecici;
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