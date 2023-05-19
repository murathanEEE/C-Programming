#include <stdio.h>
#include <stdlib.h>

// dizideki sayının kaçıncı sırada olduğunu dönen bir arama algoritmasıdır
// linear search'e göre eleman arama işini zamandan tasarruf ederek daha hızlı yapar
// belleği daha az yorarak arama yapar

int main()
{
    int n;
    int search;

    printf("Enter the size of series:\n");
    scanf("%d", &n);

    int i,j,k,t;
    int gecici;
    int first,last,mid;
    int numbers[n];

    srand(time(NULL));
    for (i=0; i<n; i++)
    {
        numbers[i] = rand()%100;
    }

    printf("Series:\n");
    for (j=0; j<n; j++)
    {
        printf("%d ", numbers[j]);
    }

    printf("\nSearch a number in the series:\n");
    scanf("%d", &search);

    // binary search
    // öncelikle diziyi küçükten büyüğe sıralamak gerekir
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
    
    first = 0;
    last = n-1;
    mid = (first+last) / 2;

    while (first <= last)
    {
        if (numbers[mid] < search)
        {
            first = mid + 1;
        }
        else if (numbers[mid] == search)
        {
            printf("%d -> %d.\n", search, mid+1);
            break;
        }
        else
        {
            last = mid - 1;
        }
        
        mid = (first+last) / 2;
    }
    
    if (first > last)
    {
        printf("Entered number is not in the series!\n");
    }
    
    
    return 0;
}