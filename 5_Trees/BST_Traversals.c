/*
    Title: Binary Search Tree (BST) Operations
    Author: Rishika
    Description: Program to implement a Binary Search Tree with insertion 
                 and inorder, preorder, and postorder traversals.
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

// Inorder traversal (Left, Root, Right)
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Preorder traversal (Root, Left, Right)
void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder traversal (Left, Right, Root)
void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Main function
int main() {
    struct node *root = NULL;*
