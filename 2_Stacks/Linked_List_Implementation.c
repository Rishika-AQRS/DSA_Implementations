/*
    Title: Stack Implementation Using Linked List
    Author: Rishika
    Description: Program to implement a stack using singly linked list
                 with push, pop, and display operations.
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

// Top pointer
struct Node *top = NULL;

// Push operation
void push(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;   // Link new node to previous top
    top = newNode;         // Update top
    printf("%d pushed to stack.\n", value);
}

// Pop operation
void pop() {
    if (top == NULL) {
        printf("Stack Underflow! (empty stack)\n");
        return;
    }

    struct Node *temp = top;
    printf("%d popped from stack.\n", temp->data);
    top = top->next;
    free(temp);
}

// Display stack
void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    struct Node *temp = top;
    printf("Stack (top to bottom): ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);

    display();   // Display stack

    pop();
    display();   // Display stack after pop

    pop();
    pop();
    pop();       // Pop from empty stack

    return 0;
}

/*
Sample Output:

10 pushed to stack.
20 pushed to stack.
30 pushed to stack.
Stack (top to bottom): 30 -> 20 -> 10 -> NULL
30 popped from stack.
Stack (top to bottom): 20 -> 10 -> NULL
20 popped from stack.
10 popped from stack.
Stack Underflow! (empty stack)
*/
