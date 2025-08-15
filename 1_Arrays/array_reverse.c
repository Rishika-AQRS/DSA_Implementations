/*
    Title: Reverse Array
    Author: Rishika
    Description: Program to reverse the elements of an array.
    Language: C
*/

// Code:
#include <stdio.h>
int main() {
   int arr1[100];
   int i,j,n;
   printf("enter the number of elements in the array: ");
   scanf("%d", &n);
   for(i=0;i<n;i++)
   {printf("Enter element %d: ", i+1);
       scanf("%d", &arr1[i]);
   }
   printf("Initial Array: \n");
  for(i=0;i<n;i++)
   {printf("%d ", arr1[i]);}
  for (i = 0; i < n / 2; i++) {
        int temp = arr1[i];
       arr1[i] = arr1[n - i - 1];
        arr1[n - i - 1] = temp;
  }
   printf("\nReversed Array: \n");
   for(i=0;i<n;i++)
   {printf("%d ", arr1[i]);}
  
    return 0;
}

// Sample Output:
/*
enter the number of elements in the array: 5
Enter element 1: 37
Enter element 2: 49
Enter element 3: 52
Enter element 4: 17
Enter element 5: 5
Initial Array: 
37 49 52 17 5 
Reversed Array: 
5 17 52 49 37 
*/
