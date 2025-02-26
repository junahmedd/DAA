// C PROGRAM TO SORT ELEMENT USING SELECTION SORT.... 
#include<stdio.h>
#include<stdlib.h>

void selection_sort(int a[], int n){
    int i,j;
    for(i = 0; i < n - 1 ; i++){
        int small = i;
        for(j = i+1; j < n; j++){
            if(a[j] < a[small]){
                small = j;
            }
        }    
            int temp = a[i];
            a[i] = a[small];
            a[small] = temp;
    }
}

int main() {
    int n,a[20];
    printf("Enter size of an array: ");
    scanf("%d",&n);
    printf("Enter %d elements: \n",n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    selection_sort(a,n);

    printf("Sorted array: ");
    for(int i = 0; i< n ;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
