#include <stdio.h>
int main() {
    int n;
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the number to be searched:");
    scanf("%d", &n);
    for(int i=0;i<size;i++){
        if(arr[i]==n) {
            printf("The entered number is found at position %d\n",i+1);
            return 0;
        }
    }
    printf("The entered number is not found in the array.\n");
    return 0;
}
