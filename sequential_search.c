// C PROGRAM TO FOR SEQUENTIAL SEARCH..//
#include <stdio.h>
#include <stdlib.h>

int sequential_search(int a[], int key, int n){
    for(int i = 0 ; i < n ; i++){
        if(key == a[i])
            return i;
    }        
        return -1;   
}

void main() {
    int i, a[20],key,n,sequential;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    printf("Enter %d elemeents: ",n);
    for(i = 0; i < n ;i++){
        scanf("%d",&a[i]);
    }
        printf("Enter key element to be searched");
    scanf("%d",&key);
    sequential = sequential_search(a,key,n); 
    if(sequential == -1){
        printf("Element not found");
    }
    else {
        printf("Element %d found at %d position",key,sequential+1);
    }
}
