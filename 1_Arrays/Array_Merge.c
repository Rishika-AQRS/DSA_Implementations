/*
    Title: Merge Two Arrays
    Author: Rishika
    Description: Program to merge two arrays into a single array.
    Language: C
*/

// Code:
#include <stdio.h>
int main() {
// initializing both the arrays as user inputs
   int arr1[5], arr2[5],arr[10];
   int i,j;
   printf("Array 1:\n");
   for(i=0;i<5;i++)
   {printf("Enter element %d: ", i+1);
       scanf("%d", &arr1[i]);
   }
   for(i=0;i<5;i++)
   {printf("%d ", arr1[i]);}
   printf("\nArray 2:\n");
   for(i=0;i<5;i++)
   {printf("Enter element %d: ", i+1);
       scanf("%d", &arr2[i]);
   }
  // merging the arrays 
   for(i=0;i<5;i++)
   {printf("%d ", arr2[i]);}
   for(i=0;i<5;i++)
   {arr[i]=arr1[i];
       arr[i+5]=arr2[i];
   }
  //printing the final merged array
   printf("\nMerged array:\n");
   for(i=0;i<10;i++)
   {printf("%d ", arr[i]);}
    return 0;
}

// Sample Output: 
/*
Array 1:
Enter element 1: 1
Enter element 2: 2
Enter element 3: 3
Enter element 4: 4
Enter element 5: 5
1 2 3 4 5 
Array 2:
Enter element 1: 6
Enter element 2: 7
Enter element 3: 8
Enter element 4: 9
Enter element 5: 10
6 7 8 9 10 
Merged array:
1 2 3 4 5 6 7 8 9 10 
*/
