#include <stdio.h>
#include <stdlib.h>

// dizideki sayının kaçıncı sırada olduğunu dönen bir arama algoritmasıdır

int main()
{
    int n;
    int search;

    printf("Enter the size of series:\n");
    scanf("%d", &n);

    int i,j,k;
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

    for (k=0; k<n; k++)
    {
        if (numbers[k] == search)
        {
            printf("\n%d -> %d.\n", search, k+1);
            break;
        } 
        
        if (k == n-1)
        {
            printf("Entered number is not in the series!\n");
        }
        
    }
    
    return 0;
}