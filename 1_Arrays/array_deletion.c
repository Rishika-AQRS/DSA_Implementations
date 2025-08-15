/*
    Title: Array Deletion
    Author: Rishika
    Description: Program to delete an element from an array at a given position.
    Language: C
*/

// Code:
#include <stdio.h>
int main() {
// initializing the array as user input
    int arr[100], i, n, k, el;
    printf("enter the number of elements in array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {printf("enter the element: ");
        scanf("%d", &arr[i]);}
// printing the array
    printf("Array given: ");
    for(i=0;i<n;i++)
    {printf("%d ", arr[i]);}
    printf("\n");
// getting the position of the element to be deleting and applying the deletion algorithm
    printf("enter the position at which the element is to be deleted: ");
    scanf("%d", &k);
    int item=arr[k-1];
    for(i=(k-1);i<=(n-1);i++)
    {arr[i]=arr[i+1];}
    printf("the deleted element is: %d", item);
// printing the final array
   printf("\nArray after deletion: ");
    for(i=0;i<n-1;i++)
    {printf("%d ", arr[i]);}
    return 0;
}

// Sample Output: 
/*
enter the number of elements in array: 6
enter the element: 10
enter the element: 20
enter the element: 30
enter the element: 40
enter the element: 50
enter the element: 60
Array given: 10 20 30 40 50 60 
enter the position at which the element is to be deleted: 4
the deleted element is: 40
Array after deletion: 10 20 30 50 60 
*/
