/*
    Title: Breadth-First Search (BFS) on Graph
    Author: Rishika
    Description: Program to perform BFS traversal on a graph using 
                 adjacency matrix representation and queue.
    Language: C
*/

#include <stdio.h>
#define MAX 10

// BFS function
void BFS(int adj[MAX][MAX], int n, int start) {
    int visited[MAX] = {0};
    int queue[MAX], front = 0, rear = 0;

    // Enqueue start vertex and mark visited
    queue[rear++] = start;
    visited[start] = 1;

    printf("BFS Traversal: ");
    while (front < rear) {
        int v = queue[front++];   // Dequeue
        printf("%d ", v);

        // Visit all adjacent vertices
        for (int i = 0; i < n; i++) {
            if (adj[v][i] == 1 && visited[i] == 0) {
                queue[rear++] =
