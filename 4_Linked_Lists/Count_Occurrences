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
    int cou
