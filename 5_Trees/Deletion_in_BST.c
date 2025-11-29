/*
    Title: Binary Search Tree (BST) Deletion
    Author: Rishika
    Description: Program to implement a Binary Search Tree with insertion,
                 inorder traversal, and deletion of a node.
    Language: C
*/

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
    if (root == NULL)
        return createnode(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);

    return root;
}

// Find minimum value node in a subtree (inorder successor)
struct node* min(struct node *node) {
    while (node && node->left != NULL)
        node = node->left;
    return node;
}

// Delete a node from BST
struct node* deletenode(struct node* root, int val) {
    if (root == NULL)
        return root;

    if (val < root->data)
        root->left = deletenode(root->left, val);
    else if (val > root->data)
        root->right = deletenode(root->right, val);
    else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get inorder successor
        struct node* temp = min(root->right);
        root->data = temp->data;
        root->right = deletenode(root->right, temp->data);
    }
    return root;
}

// Inorder traversal of BST
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Main function
int main() {
    struct node* root = NULL;
    int n, value, del, i;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the values to insert:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("\nInorder traversal before deletion: ");
    inorder(root);

    printf("\nEnter the value to delete: ");
    scanf("%d", &del);
    root = deletenode(root, del);

    printf("\nInorder traversal after deletion: ");
    inorder(root);

    return 0;
}

/*
Sample Input:

Enter the number of nodes: 5
Enter the values to insert:
50 30 70 20 40

Enter the value to delete: 30

Sample Output:

Inorder traversal before deletion: 20 30 40 50 70
Inorder traversal after deletion: 20 40 50 70
*/
