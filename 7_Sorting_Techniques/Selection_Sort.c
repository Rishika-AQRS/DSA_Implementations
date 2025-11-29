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
