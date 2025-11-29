/*
    Title: Insertion Sort
    Author: Rishika
    Description: Program to sort an array of integers in ascending order 
                 using Insertion Sort algorithm.
    Language: C
*/

#include <stdio.h>

// Function to perform Insertion Sort
void InsertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Main function
int main() {
    int n, i;
    int arr[20];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nUnsorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    InsertionSort(arr, n);

    printf("\nSorted Array using Insertion Sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/*
Sample Input:

Enter the number of elements: 5
Enter 5 elements:
12 11 13 5 6

Sample Output:

Unsorted Array: 12 11 13 5 6
Sorted Array using Insertion Sort: 5 6 11 12 13
*/
