#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n, W;
    int wt[10], val[10], i, w;
    int K[10][10];

    printf("Enter number of items: ");
    scanf("%d", &n);
    printf("Enter weights: ");
    for (i = 0; i < n; i++)
        scanf("%d", &wt[i]);
    printf("Enter values: ");
    for (i = 0; i < n; i++)
        scanf("%d", &val[i]);
    printf("Enter capacity of knapsack: ");
    scanf("%d", &W);

    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    printf("Maximum value in knapsack: %d\n", K[n][W]);
    return 0;
}
