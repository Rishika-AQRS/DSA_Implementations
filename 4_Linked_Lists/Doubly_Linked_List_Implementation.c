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

// Insert
