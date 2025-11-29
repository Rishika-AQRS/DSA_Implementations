/*
    Title: Quick Sort
    Author: Rishika
    Description: Program to sort an array of integers in ascending order 
                 using Quick Sort algorithm (divide and conquer approach).
    Language: C
*/

#include <stdio.h>

// Function to perform Quick Sort
void QuickSort(int arr[20], int low, int high) {
    int i = low;
    int j = high;
    int mid = (low + high) / 2;
    int pivot = arr[mid];
    int temp;

    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            // Swap arr[i] and arr[j]
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (low < j)
        QuickSort(arr, low, j);
    if (i < high)
        QuickSort(arr, i, high);
}

// Main function
int main() {
    int n, i;
    int arr[20];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nUnsorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    QuickSort(arr, 0, n - 1);

    printf("\nSorted Array after Quick Sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/*
Sample Input:

Enter the number of elements: 6
Enter element 1: 34
Enter element 2: 7
Enter element 3: 23
Enter element 4: 32
Enter element 5: 5
Enter element 6: 62

Sample Output:

Unsorted Array: 34 7 23 32 5 62
Sorted Array after Quick Sort: 5 7 23 32 34 62
*/
