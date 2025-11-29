/*
    Title: Binary Search Tree (BST) Deletion
    Author: Rishika
    Description: Program to implement a Binary Search Tree with insertion,
                 inorder traversal, and deletion of a node.
    Language: C
*/

// Code
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node *left, *right;
};

// Create a new node
struct node* createnode(int val) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->left = newnode->right = NULL;
    return newnode;
}

// Insert a value into BST
struct node* insert(struct node *root, int val) {
    if (root == NULL) {
        return createnode(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    return root;
}

// Find minimum value node in a subtree (inorder successor)
struct node* min(struct node *node) {
    while (node && node->left != NULL) {
        node = node->left;
    }
    return node;
}

// Delete a node from BST
struct node* deletenode(struct node* root, int val) {
    if (root == NULL) {
        return root;
    }

    if (val < root->data) {
        root->left = deletenode(root->left, val);
    } else if (val > root->data) {
        root->right = deletenode(root->right
