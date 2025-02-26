// C PROGRAM FOR INSERTION SORT //

#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int a[], int n){
    int i,j,key;

    for(i = 1; i < n ; i++){
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

void main() {
    int i,a[20],key,n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i = 0; i < n ; i++)
        scanf("%d",&a[i]);
    insertion_sort(a,n);
    for(i = 0; i < n ; i++)
        printf("%d\t",a[i]);
}
