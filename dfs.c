#include <stdio.h>
#include <stdlib.h>
#define MAX_NODE 10

void dfs(int graph[MAX_NODE][MAX_NODE], int visited[MAX_NODE], int node, int n) {
    printf("%d ", node);
    visited[node] = 1;
    for (int i = 0; i < n; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            dfs(graph, visited, i, n);
        }
    }
}

int main() {
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    int graph[MAX_NODE][MAX_NODE];
    int visited[MAX_NODE] = {0};
    printf("Enter the adjacency matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    printf("DFS traversal: ");
    dfs(graph, visited, 0, n);
    printf("\n");
    return 0;
}
