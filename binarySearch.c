#include <stdio.h>

int main() {
    int n;
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the number to be searched: ");
    scanf("%d", &n);
    int low=0;
    int high=size-1;
    int mid;
    int f=0;
  while  (low<=high){
        mid=(low+high)/2;
        if(arr[mid]==n) {
            printf("Element found at array position %d", mid);
            f=1;
            break;
        }else if(arr[mid]<n){
            low=mid+1;
        } else{
            high=mid - 1;
        }
  }
    if (f!=0) {
        printf("Element not found in the array.\n");
    }

    return 0;
}