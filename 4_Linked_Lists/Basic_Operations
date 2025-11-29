/*
    Title: Singly Linked List Operations (Insert, Delete, Search, Display)
    Author: Rishika
    Description: Program to implement a singly linked list with insertion at a
                 given position, deletion by value, searching for an element,
                 and displaying the linked list.
    Language: C
*/

// Code
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Create new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert at position
void insertAtPos(struct Node** head, int value, int pos) {
    struct Node* newNode = createNode(value);

    if (pos == 1) {  // insert at beginning
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Display list
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Delete node by value
void deleteNode(struct Node** head, int value) {
    struct Node* temp = *head, *prev = NULL;

    if (temp && temp->data == value) { // head to delete
        *head = temp->next;
        return;
    }

    while (temp && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (!temp) {
        printf("Value not found!\n");
        return;
    }

    prev->next = temp->next;
}

// Search element
void search(struct Node* head, int key) {
    int pos = 1;
    while (head) {
        if (head->data == key) {
            printf("%d found at position %d\n", key, pos);
            return;
        }
        head = head->next;
        pos++;
    }
    printf("%d not found in the list\n", key);
}

int main() {
    struct Node* head = NULL;
    int n, val, pos;

    // Create list
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter value for node %d: ", i);
        scanf("%d", &val);
        insertAtPos(&head, val, i); // insert sequentially
    }

    printf("\nInitial List: ");
    display(head);

    // Insertion
    printf("\nEnter value and position to insert: ");
    scanf("%d %d", &val, &pos);
    insertAtPos(&head, val, pos);
    printf("List after insertion: ");
    display(head);

    // Deletion
    printf("\nEnter value to delete: ");
    scanf("%d", &val);
    deleteNode(&head, val);
    printf("List after deletion: ");
    display(head);

    // Search
    printf("\nEnter value to search: ");
    scanf("%d", &val);
    search(head, val);

    return 0;
}

/*
Sample Output:

Enter number of nodes: 3
Enter value for node 1: 10
Enter value for node 2: 20
Enter value for node 3: 30

Initial List: 10 -> 20 -> 30 -> NULL

Enter value and position to insert: 25 3
List after insertion: 10 -> 20 -> 25 -> 30 -> NULL

Enter value to delete: 20
List after deletion: 10 -> 25 -> 30 -> NULL

Enter value to search: 25
25 found at position 2
*/
