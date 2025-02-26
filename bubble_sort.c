// C PROGRAM FOR BUBBLE SORT //

#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int a[], int n){
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void main() {
    int i,a[20],key,n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i = 0; i < n ; i++)
        scanf("%d",&a[i]);
    bubble_sort(a,n);
    for(i = 0; i < n ; i++)
        printf("%d\t",a[i]);
}
