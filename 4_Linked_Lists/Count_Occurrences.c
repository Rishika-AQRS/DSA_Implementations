/*
    Title: Count Occurrences of an Element in a Singly Linked List
    Author: Rishika
    Description: Program to create a singly linked list, insert elements
                 at the end, and count how many times a given value
                 appears in the list.
    Language: C
*/

// Code
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert node at the end of the list
void insertEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);

    if (*head == NULL) { // first node
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

// Count occurrences of a given key
int countItem(struct Node* head, int key) {
    int count = 0;

    while (head) {
        if (head->data == key)
            count++;

        head = head->next;
    }

    return count;
}

// Main function
int main() {
    struct Node* head = NULL;
    int n, val, key;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Insert all nodes
    for (int i = 1; i <= n; i++) {
        printf("Enter value for node %d: ", i);
        scanf("%d", &val);
        insertEnd(&head, val);
    }

    printf("Enter item to count: ");
    scanf("%d", &key);

    printf("%d occurs %d times in the list.\n", key, countItem(head, key));

    return 0;
}

/*
Sample Output:

Enter number of nodes: 5
Enter value for node 1: 10
Enter value for node 2: 20
Enter value for node 3: 10
Enter value for node 4: 30
Enter value for node 5: 10

Enter item to count: 10
10 occurs 3 times in the list.
*/
