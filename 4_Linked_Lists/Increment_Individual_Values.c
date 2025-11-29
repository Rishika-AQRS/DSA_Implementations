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
void increment(struct Node* head)*
