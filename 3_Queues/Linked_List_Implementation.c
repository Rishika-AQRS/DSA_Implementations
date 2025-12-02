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

    struct Node *temp = front;
    printf("%d deleted from queue.\n", temp->data);
    front = front->next;

    if (front == NULL)  // Queue becomes empty
        rear = NULL;

    free(temp);
}

// Display queue
void display() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node *temp = front;
    printf("Queue (front to rear): ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();   // Display queue

    dequeue();
    display();   // Display queue after dequeue

    dequeue();
    dequeue();
    dequeue();   // Dequeue from empty queue

    return 0;
}

/*
Sample Output:

10 inserted into queue.
20 inserted into queue.
30 inserted into queue.
Queue (front to rear): 10 -> 20 -> 30 -> NULL
10 deleted from queue.
Queue (front to rear): 20 -> 30 -> NULL
20 deleted from queue.
30 deleted from queue.
Queue Underflow! (empty queue)
*/
