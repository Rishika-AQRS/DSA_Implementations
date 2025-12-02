/*
    Title: Doubly Linked List Operations
    Author: Rishika
    Description: Program to implement a doubly linked list with insertion 
                 at beginning/end, deletion from beginning/end, searching 
                 for an element, and displaying the list.
    Language: C
*/

// Code
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *prev, *next;
};

// Head pointer
struct Node *head = NULL;

// Create a new node
struct Node* createNode(int data) {
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->prev = n->next = NULL;
    return n;
}

// Insert at end
void insertEnd(int data) {
    struct Node *n = createNode(data);
    if (!head) { 
        head = n; 
        return; 
    }
    struct Node *t = head;
    while (t->next) t = t->next;
    t->next = n;
    n->prev = t;
}

// Insert at beginning
void insertBeg(int data) {
    struct Node *n = createNode(data);
    if (!head) { 
        head = n; 
        return; 
    }
    n->next = head;
    head->prev = n;
    head = n;
}

// Delete first node
void deleteBeg() {
    if (!head) return;
    struct Node *t = head;
    head = head->next;
    if (head) head->prev = NULL;
    free(t);
}

// Delete last node
void deleteEnd() {
    if (!head) return;
    struct Node *t = head;
    if (!t->next) { 
        free(t); 
        head = NULL; 
        return; 
    }
    while (t->next) t = t->next;
    t->prev->next = NULL;
    free(t);
}

// Search for an element
void search(int key) {
    struct Node *t = head; 
    int pos = 1;
    while (t) {
        if (t->data == key) {
            printf("%d found at position %d\n", key, pos);
            return; 
        }
        t = t->next; 
        pos++;
    }
    printf("%d not found\n", key);
}

// Display list
void display() {
    struct Node *t = head;
    printf("List: ");
    while (t) { 
        printf("%d <-> ", t->data); 
        t = t->next; 
    }
    printf("NULL\n");
}

// Main function
int main() {
    insertEnd(10);
    insertEnd(20);
    insertBeg(5);
    display();          // Display list

    deleteBeg();
    display();          // After deleting beginning

    deleteEnd();
    display();          // After deleting end

    search(10);         // Search for 10
    search(50);         // Search for 50

    return 0;
}

/*
Sample Output:

List: 5 <-> 10 <-> 20 <-> NULL
List: 10 <-> 20 <-> NULL
List: 10 <-> NULL
10 found at position 1
50 not found
*/

