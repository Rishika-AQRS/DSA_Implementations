/*
    Title: Array Insertion
    Author: Rishika
    Description: Program to insert an element into an array at a given position.
    Language: C
*/

// Code:
#include <stdio.h>
int main() {
// initializing the user-defined array
    int arr[100], i, n, k, el;
    printf("enter the number of elements in array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {printf("enter the element: ");
        scanf("%d", &arr[i]);
    }
// printing the array
    printf("Array given: ");
    for(i=0;i<n;i++)
    {printf("%d ", arr[i]);}
    printf("\n");
// taking the element to insert and its position as user input and applying the insertion algorithm
    printf("enter the element to insert: ");
    scanf("%d", &el);
    printf("enter the position to insert at: ");
    scanf("%d", &k);
    for(i=(n-1);i>=(k-1);i--)
    {arr[i+1]=arr[i];}
    arr[k-1]=el;
// printing the final array
    printf("Array after insertion: ");
    for(i=0;i<=n;i++)
    {printf("%d ", arr[i]);}
    return 0;
}

// sample output:
/*
enter the number of elements in array: 6
enter the element: 10
enter the element: 20
enter the element: 30
enter the element: 40
enter the element: 50
enter the element: 60
Array given: 10 20 30 40 50 60 
enter the element to insert: 90
enter the position to insert at: 3
Array after insertion: 10 20 90 30 40 50 60 
*/
