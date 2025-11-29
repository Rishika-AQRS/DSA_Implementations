/*
    Title: Merge Sort
    Author: Rishika
    Description: Program to sort an array of integers in ascending order 
                 using Merge Sort algorithm (divide and conquer approach).
    Language: C
*/

#include <stdio.h>

// Function to merge two subarrays
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];
    int i, j, k;

    // Copy data to temporary arrays
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0; j = 0; k = l;

    // Merge the temporary arrays back into arr[l..r]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

// Recursive Merge Sort function
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// Main function
int main() {
    int n, i, arr[20];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nUnsorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("\nSorted Array using Merge Sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/*
Sample Input:

Enter the number of elements: 6
Enter 6 elements:
12 11 13 5 6 7

Sample Output:

Unsorted Array: 12 11 13 5 6 7
Sorted Array using Merge Sort: 5 6 7 11 12 13
*/
