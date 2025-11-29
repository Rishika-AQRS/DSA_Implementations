/*
    Title: Depth-First Search (DFS) on Graph
    Author: Rishika
    Description: Program to perform DFS traversal on a graph using 
                 adjacency matrix representation.
    Language: C
*/

#include <stdio.h>
#define MAX 10

// DFS function
void DFS(int adj[MAX][MAX], int n, int start, int visited[MAX]) {
    printf("%d ", start);
    visited[start] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[start][i] == 1 && visited[i] == 0) {
            DFS(adj, n, i, visited);  // Recursive call
        }
    }
}

// Main function
int main() {
    int n, start;
    int adj[MAX][MAX];
    int visited[MAX] = {0};

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

    printf("DFS Traversal: ");
    DFS(adj, n, start, visited);

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

DFS Traversal: 0 1 3 2
*/
