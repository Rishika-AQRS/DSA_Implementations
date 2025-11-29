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
                queue[rear++] = i;  // Enqueue
                visited[i] = 1;
            }
        }
    }
}

// Main function
int main() {
    int n, start;
    int adj[MAX][MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    BFS(adj, n, start);

    return 0;
}

/*
Sample Input:

Enter number of vertices: 4
Enter adjacency matrix:
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0
Enter starting vertex (0 to 3): 0

Sample Output:

BFS Traversal: 0 1 2 3
*/

