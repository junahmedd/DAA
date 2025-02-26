// C PROGRAM FOR BINARY SEARCH....//

#include<stdio.h>
#include<stdlib.h>

int binary_search(int a[], int key, int n){
    int low,upr,mid;
    low = 0;
    upr = n - 1;
      
     while (low <= upr){
        mid = (low+upr)/2;
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
           upr = mid - 1;    
    }
    return -1;
}


int main(){
    int n,a[20],key,binarysearch;
    printf("Enter size of arary elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: \n",n);
    for(int i = 0 ; i < n ; i++)
    scanf("%d",&a[i]);
    printf("Enter key element to be search: ");
    scanf("%d",&key);
    binarysearch = binary_search(a,key,n);
    if(binarysearch == -1)
        printf("Element not found");
    else 
        printf("Element %d found at %d position",key,binarysearch + 1);
return 0;
}
