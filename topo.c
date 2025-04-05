#include <stdio.h>
#define MAX 20
void topo_sort(int n, int adj[MAX][MAX]) {
    int in_deg[MAX] = {0}, queue[MAX], front = 0, rear = -1, 
    count =0;
    // Calculate in-degrees
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (adj[i][j]) in_deg[j]++;
                // Enqueue nodes with in-degree 0
    for (int i = 0; i < n; i++)
        if (in_deg[i] == 0) queue[++rear] = i;
    printf("Topological Order: ");
    while (front <= rear) {
        int node = queue[front++];
        printf("%d ", node);
        count++;       
        for (int i = 0; i < n; i++) {
            if (adj[node][i] && --in_deg[i] == 0)
                queue[++rear] = i;
        }
    }
    if (count != n)
        printf("\nCycle detected. Topological sorting not possible.\n");
    else
        printf("\n");
}

int main() {
    int n, adj[MAX][MAX];
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    topo_sort(n, adj);
    return 0;
}
