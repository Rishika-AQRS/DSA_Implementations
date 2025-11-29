/*
    Title: Heap Sort
    Author: Rishika
    Description: Program to sort an array of integers in ascending order 
                 using Heap Sort algorithm (builds a max-heap and extracts elements).
    Language: C
*/

#include <stdio.h>

// Function to maintain heap property
void heapify(int arr[], int n, int i) {
    int largest = i;        // Initialize largest as root
    int l = 2 * i + 1;      // left child
    int r = 2 * i + 2;      // right child
    int temp;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    // Swap and continue heapifying if root is not largest
    if (largest != i) {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

// Function to perform Heap Sort
void heapSort(int arr[], int n) {
    int i, temp;

    // Build max heap
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements one by one
    for (i = n - 1; i > 0; i--) {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}

// Main function
int main() {
    int n, i, arr[20];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nUnsorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    heapSort(arr, n);

    printf("\nSorted Array using Heap Sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/*
Sample Input:

Enter number of elements: 6
Enter 6 elements:
12 11 13 5 6 7

Sample Output:

Unsorted Array: 12 11 13 5 6 7
Sorted Array using Heap Sort: 5 6 7 11 12 13
*/
