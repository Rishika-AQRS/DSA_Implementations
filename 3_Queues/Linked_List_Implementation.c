/*
    Title: Queue Implementation Using Linked List
    Author: Rishika
    Description: Program to implement a queue using singly linked list
                 with enqueue, dequeue, and display operations.
    Language: C
*/

// Code
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

// Front and rear pointers
struct Node *front = NULL, *rear = NULL;

// Enqueue (insert at rear)
void enqueue(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {   // Empty queue
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("%d inserted into queue.\n", value);
}

// Dequeue (delete from front)
void dequeue() {
    if (front == NULL) {
        printf("Queue Underflow! (empty queue)\n");
        return;
    }
