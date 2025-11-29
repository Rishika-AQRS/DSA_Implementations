/*
    Title: Bubble Sort
    Author: Rishika
    Description: Program to sort an array of integers in ascending order 
                 using Bubble Sort algorithm.
    Language: C
*/

#include <stdio.h>

// Function to perform Bubble Sort
void BubbleSort(int arr[20], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
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
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    BubbleSort(arr, n);

    printf("\nSorted Array after Bubble Sort: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Sample Input:

Enter the number of elements: 5
Enter element 1: 64
Enter element 2: 34
Enter element 3: 25
Enter element 4: 12
Enter element 5: 22

Sample Output:

Unsorted Array: 64 34 25 12 22
Sorted Array after Bubble Sort: 12 22 25 34 64
*/
