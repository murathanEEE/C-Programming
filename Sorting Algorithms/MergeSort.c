#include <stdio.h>
#include <stdlib.h>

// It is an algorithm for sorting the numbers in an array from smallest to largest

void merge(int nums[100], int a, int mid, int b)
{
    int i, j, k;
    int n1 = mid - a + 1;
    int n2 = b - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = nums[a + i];
    for (j = 0; j < n2; j++)
        R[j] = nums[mid + 1 + j];

    i = 0;
    j = 0;
    k = a;

    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) {
            nums[k] = L[i];
            i++;
        }
        else {
            nums[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) 
    {
        nums[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        nums[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int nums2[100], int left, int right)
{
    int m;

    if(left < right)
    {
        m = left + (right - left) / 2;

        mergeSort(nums2, left, m);
        mergeSort(nums2, m + 1, right);

        merge(nums2, left, m, right);
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
    mergeSort(numbers,0,n-1);

    printf("\nSeries after sorting:\n");
    for (j=0; j<n; j++)
    {
        printf("%d ", numbers[j]);
    }
    
    return 0;
}
