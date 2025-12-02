/*
    Title: Increment Each Node Value in a Singly Linked List
    Author: Rishika
    Description: Program to create a singly linked list, display it,
                 and increment each node's value by 10.
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

// Insert node at the end of the list
void insertEnd(struct Node** head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }
}

// Display the linked list
void display(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Increment each node's value by 10
void increment(struct Node* head) {
    while (head) {
        head->data += 10;
        head = head->next;
    }
}

// Main function
int main() {
    struct Node* head = NULL;
    int n, val;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Insert nodes
    for (int i = 1; i <= n; i++) {
        printf("Enter value for node %d: ", i);
        scanf("%d", &val);
        insertEnd(&head, val);
    }

    printf("\nBefore increment: ");
    display(head);

    increment(head);

    printf("After increment:  ");
    display(head);

    return 0;
}

/*
Sample Output:

Enter number of nodes: 3
Enter value for node 1: 5
Enter value for node 2: 15
Enter value for node 3: 25

Before increment: 5 -> 15 -> 25 -> NULL
After increment:  15 -> 25 -> 35 -> NULL
*/

