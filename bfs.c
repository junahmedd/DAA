#include <stdio.h>
#include <stdlib.h>
#define MAX_NODE 10

void bfs(int graph[MAX_NODE][MAX_NODE], int start, int n)
{
    int queue[MAX_NODE], front = 0, rear = 0;
    int visited[MAX_NODE] = {0};
    queue[rear++] = start;
    visited[start] = 1;
    printf("BFS traversal: ");
    while (front < rear)
    {
        int node = queue[front++];
        printf("%d ", node);
        for (int i = 0; i < n; i++)
        {
            if (graph[node][i] == 1 && !visited[i])
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    int graph[MAX_NODE][MAX_NODE];
    printf("Enter the adjacency matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }
    int start_node;
    printf("Enter the starting node for BFS: ");
    scanf("%d", &start_node);
    bfs(graph, start_node, n);
    return 0;
}
