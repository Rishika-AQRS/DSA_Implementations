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
    newNode->next = top;   // Link new
