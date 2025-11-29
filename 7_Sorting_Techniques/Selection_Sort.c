/*
    Title: Selection Sort
    Author: Rishika
    Description: Program to sort an array of integers in ascending order 
                 using Selection Sort algorithm.
    Language: C
*/

#include <stdio.h>

// Function to perform Selection Sort
void SelectionSort(int arr[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        // Swap arr[i] and arr[min]
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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

    SelectionSort(arr, n);

    printf("\nSorted Array using Selection Sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/*
Sample Input:

Enter the number of elements: 5
Enter 5 elements:
64 25 12 22 11

Sample Output:

Unsorted Array: 64 25 12 22 11
Sorted Array using Selection Sort: 11 12 22 25 64
*/
